# Structs

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_struct_ is a way to combine multiple fields to represent a composite data structure, which further lays the foundation for Object Oriented Programming. For example, we can store details related to a student in a struct consisting of his _age (int), first\_name (string), last\_name (string) and standard (int)_.  
<br>
_struct_ can be represented as

	struct NewType {
    	type1 value1;
        type2 value2;
        .
        .
        .
        typeN valueN;
    };
    
You have to create a struct, named _Student_, representing the student's details, as mentioned above, and store the data of a student.

**Input Format**

Input will consist of four lines.    
The first line will contain an integer, representing _age_.  
The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the _first\_name_ of a student.  
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the _last\_name_ of a student.  
The fourth line will contain an integer, representing the _standard_ of student.  

*Note:* The number of characters in _first\_name_ and _last\_name_ will not exceed 50.


**Output Format**

Output will be of a single line, consisting of _age_, _first\_name_, _last\_name_ and _standard_, each separated by one white space.  

*P.S.:* I/O will be handled by HackerRank.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-05T06:19:45.049Z  

```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};
int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/c-tutorial-struct/problem)