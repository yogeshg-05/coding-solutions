# C++ Class Templates

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

A class template provides a specification for generating classes based on parameters. *Class templates* are generally used to implement containers. A class template is instantiated by passing a given set of types to it as template arguments. Here is an example of a class, MyTemplate, that can store one element of any type and that has just one member function *divideBy2*, which divides its value by 2. 
<pre>
template &lt;class T&gt;
class MyTemplate {
T element;
public:
MyTemplate (T arg) {element=arg;}
T divideBy2 () {return element/2;}
};
</pre>
It is also possible to define a different implementation of a template for a specific type. This is called *Template Specialization*. For the template given above, we find that a different implementation for type *char* will be more useful, so we write a function *printElement* to print the *char* element:
<pre>
// class template specialization:
template &lt;&gt;
class MyTemplate &lt;char&gt; {
char element;
public:
MyTemplate (char arg) {element=arg;}
char printElement ()
{
return element;
}
};
</pre>


You are given a main() function which takes a set of inputs. The type of input governs the kind of operation to be performed, i.e. concatenation for *strings* and addition for *int* or *float*. You need to write the class template  *AddElements* which has a function *add()* for giving the sum of *int* or *float* elements. You also need to write a template specialization for the type *string* with a function *concatenate()* to concatenate the second string to the first string.

**Input Format**

The first line contains an integer $n$.
Input will consist of $n+1$ lines where $n$ is the number given in the first line of the input followed by $n$ lines.

Each of the next $n$ line contains the type of the elements provided and depending on the type, either two strings or two integers or two floating point numbers will be given. The type will be one of *int*, *float* or *string* types only. Out of the following two elements, you have to concatenate or add the second element to the first element.

**Constraints**

$1 \le n \le 5 \times 10^5$  
$1.0 \le value_{float} \le 10.0$, where $value_{float}$ is any float value  
$1 \le value_{int} \le 10^5$, where value<sub>int</sub> is any int value  
$0 \le len_{string} \le 10$, where $len_{string}$ is the length of any string  

**The time limit for this challenge is 4 seconds.**


**Output Format**

The code provided in the code editor will use your class template to add/append elements and give the output.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-22T12:03:46.184Z  

```cpp


/*Write the class AddElements here*/
template <class T>
class AddElements {
    T element;
    public:
        AddElements(T arg) : element(arg) {}
        T add(T arg) {
            return element + arg;
        }
};

template <>
class AddElements<string> {
    string element;
    public:
        AddElements(const string& arg) : element(arg) {}
        string concatenate(const string& arg) {
            return element + arg;
        }
};


```

---

[View on HackerRank](https://www.hackerrank.com/challenges/c-class-templates/problem)