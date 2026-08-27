# Attribute Parser

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

This challenge works with a custom-designed markup language *HRML*. In *HRML*, each element consists of a starting and ending tag, and there are attributes associated with each tag. Only starting tags can have attributes. We can call an attribute by referencing the tag, followed by a tilde, '`~`' and the name of the attribute. The tags may also be nested.    

The _opening tags_ follow the format: 

`<tag-name attribute1-name = "value1" attribute2-name = "value2" ...>`

The _closing tags_ follow the format:

`</tag-name>`  

The attributes are referenced as:

	tag1~value  
	tag1.tag2~name

Given the source code in HRML format consisting of $N$ lines, answer $Q$ queries. For each query, print the value of the attribute specified. Print _"Not Found!"_ if the attribute does not exist.  

**Example**     
```text
HRML listing
<tag1 value = "value">
<tag2 name = "name">
<tag3 another="another" final="final">
</tag3>
</tag2>
</tag1>

Queries
tag1~value
tag1.tag2.tag3~name
tag1.tag2~value
```

Here, tag2 is nested within tag1, so attributes of tag2 are accessed as `tag1.tag2~<attribute>`.  Results of the queries are:

```text
Query                 Value
tag1~value            "value"
tag1.tag2.tag3~name   "Not Found!"
tag1.tag2.tag3~final  "final"
```

**Input Format**

The first line consists of two space separated integers, $N$ and $Q$. $N$ specifies the number of lines in the HRML source program. $Q$ specifies the number of queries.

The following $N$ lines consist of either an opening tag with zero or more attributes or a closing tag.  There is a space after the tag-name, attribute-name, '=' and value.There is no space after the last value. _If there are no attributes there is no space after tag name._  

$Q$ queries follow. Each query consists of string that references an attribute in the source program.More formally, each query is of the form  $tag_{i_1}.tag_{i_2}.tag_{i_3}....tag_{i_m}$~${attr-name}$ where $m>=1$ and $tag_{i_1},tag_{i_2}...tag_{i_m}$ are valid tags in the input.



**Constraints**

- $1\le N \le 20$  
- $ 1 \le Q \le 20$  
- Each line in the source program contains, at most, $200$ characters.  
- Every reference to the attributes in the $Q$ queries contains at most $200$ characters.  
- All tag names are unique and the HRML source program is logically correct, i.e. valid nesting.
- A tag can may have no attributes.

**Output Format**

Print the value of the attribute for each query. Print "*Not Found!*" without quotes if the attribute does not exist.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-27T06:29:00.928Z  

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    cin.ignore();

    map<string, map<string, string> > attrs;
    vector<string> st;

    for (int i = 0; i < N; i++) {
        string line;
        getline(cin, line);

        if (line.substr(0, 2) == "</") {
            st.pop_back();
            continue;
        }

        int space = line.find(' ');
        int close = line.find('>');

        int end = (space != string::npos && space < close) ? space : close;
        string tag = line.substr(1, end - 1);

        string path;
        if (!st.empty()) {
            path = st.back() + "." + tag;
        } else {
            path = tag;
        }

        int pos = end;

        while (pos < close) {
            while (pos < close && line[pos] == ' ')
                pos++;

            if (pos >= close)
                break;

            int eq = line.find(" = ", pos);
            string name = line.substr(pos, eq - pos);

            int q1 = line.find('"', eq);
            int q2 = line.find('"', q1 + 1);

            string value = line.substr(q1 + 1, q2 - q1 - 1);

            attrs[path][name] = value;
            pos = q2 + 1;
        }

        st.push_back(path);
    }

    while (Q--) {
        string query;
        getline(cin, query);

        int tilde = query.find('~');

        string path = query.substr(0, tilde);
        string attribute = query.substr(tilde + 1);

        if (attrs.count(path) && attrs[path].count(attribute))
            cout << attrs[path][attribute] << '\n';
        else
            cout << "Not Found!" << '\n';
    }

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/attribute-parser/problem)