# Overload Operators

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a class - *Complex*.

    class Complex
    {
    public:
        int a,b;
    };

Operators are overloaded by means of operator functions, which are regular functions with special names. Their name begins with the operator keyword followed by the operator sign that is overloaded. The syntax is:

	type operator sign (parameters) { /*... body ...*/ }

You need to overload operators `+` and `<<` for the *Complex* class. 

The operator `+` should add complex numbers according to the rules of complex addition:   
	
    (a+ib)+(c+id) = (a+c) + i(b+d)  
  
Overload the stream insertion operator `<<` to add "$a+ib$" to the stream:  

	cout<<c<<endl;
    
The above statement should print "$a+ib$" followed by a newline where $a=c.a$ and $b=c.b$.

**Input Format**

The overloaded operator `+` should receive two complex numbers ($a+ib$ and $c+id$) as parameters. It must return a single complex number.  
  
The overloaded operator `<<` should add "$a+ib$" to the stream where $a$ is the real part and $b$ is the imaginary part of the complex number which is then passed as a parameter to the overloaded operator.


**Constraints**





**Output Format**

As per the problem statement, for the output, print "$a+ib$" followed by a newline where $a=c.a$ and $b=c.b$.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-25T13:42:37.025Z  

```cpp

Complex operator+(const Complex& x, const Complex& y) {
    Complex res;
    res.a = x.a + y.a;
    res.b = x.b + y.b;
    return res;
}

ostream& operator<<(ostream& os, const Complex& c) {
    os << c.a << "+i" << c.b;
    return os;
}
//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"


```

---

[View on HackerRank](https://www.hackerrank.com/challenges/overload-operators/problem)