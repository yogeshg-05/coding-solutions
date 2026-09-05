# Structs

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Classes in C++ are user defined types declared with keyword class that has data and functions . Although classes and structures have the same type of functionality, there are some basic differences. The data members of a class are private by default and the members of a structure are public by default. Along with storing multiple data in a common block, it also assigns some functions (known as methods) to manipulate/access them. It serves as the building block of Object Oriented Programming.  

It also has access specifiers, which restrict the access of member elements. The primarily used ones are the following:

- *public:* Public members (variables, methods) can be accessed from anywhere the code is visible.
- *private:* Private members can be accessed only by other member functions, and it can not be accessed outside of class.

Class can be represented in the form of

	class ClassName {
    	access_specifier1:
        	type1 val1;
            type2 val2;
            ret_type1 method1(type_arg1 arg1, type_arg2 arg2,...)
            ...
        access_specifier2:
        	type3 val3;
            type4 val4;
            ret_type2 method2(type_arg3 arg3, type_arg4 arg4,...)
            ...
    };

It's a common practice to make all variables private, and set/get them using public methods. For example:

	class SampleClass {
    	private:
        	int val;
        public:
        	void set(int a) {
            	val = a;
            }
            int get() {
            	return val;
            }
    };
    
---

We can store details related to a student in a class consisting of his _age (int), first\_name (string), last\_name (string) and standard (int)_.  
<br>
You have to create a class, named _Student_, representing the student's details, as mentioned above, and store the data of a student. Create setter and getter functions for each element; that is, the class should at least have following functions:

- *get\_age*, *set\_age*
- *get\_first\_name*, *set\_first\_name*
- *get\_last\_name*, *set\_last\_name*
- *get\_standard*, *set\_standard*

Also, you have to create another method _to\_string()_ which returns the string consisting of the above elements, separated by a comma(_,_). You can refer to _stringstream_ for this.

**Input Format**

Input will consist of four lines.  
The first line will contain an integer, representing the _age_.
The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the _first\_name_ of a student.  
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the _last\_name_ of a student.  
The fourth line will contain an integer, representing the _standard_ of student.

*Note:* The number of characters in _first\_name_ and _last\_name_ will not exceed 50.


**Constraints**

 

**Output Format**

The code provided by HackerRank will use your class members to set and then get the elements of the _Student_ class.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-05T06:20:06.869Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/c-tutorial-class/problem)