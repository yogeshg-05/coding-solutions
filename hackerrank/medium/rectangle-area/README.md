# Rectangle Area

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

In this challenge, you are required to compute the area of a rectangle using classes. 

Create two classes:

**Rectangle**	

The *Rectangle* class should have two data fields-*width* and *height* of *int* types. The class should have *display()* method, to print the *width* and *height* of the rectangle separated by space.

**RectangleArea**

The *RectangleArea* class is derived from *Rectangle* class, i.e., it is the sub-class of *Rectangle* class. The class should have *read\_input()* method, to read the values of *width* and *height* of the rectangle. The *RectangleArea* class should also overload the *display()* method to print the area $\left(\texttt{width} \times \texttt{height}\right)$ of the rectangle.

**Input Format**

The first and only line of input contains two space separated integers denoting the width and height of the rectangle.  

**Constraints**

- $1 \le {width}, {height} \le 100$

**Output Format**

The output should consist of exactly two lines:		
In the first line, print the *width* and *height* of the rectangle separated by space.  
In the second line, print the *area* of the rectangle.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-17T15:11:27.560Z  

```cpp

/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle {
    public:
        int width, height;
        
        void display() {
            cout << width << " " << height << endl;
        }
};

class RectangleArea : public Rectangle {
    public:
        void read_input() {
            cin >> width >> height;
        }
        
        void display() {
            cout << (width * height) << endl;
        }
};

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/rectangle-area/problem)