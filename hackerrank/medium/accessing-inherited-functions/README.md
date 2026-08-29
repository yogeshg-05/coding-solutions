# Accessing Inherited Functions

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given three classes *A, B* and *C*. All three classes implement their own version of _func_.

In class *A*, _func_  multiplies the value passed as a parameter by $2$:

	
```cpp14
class A
{
    public:
        A(){
            callA = 0;
        }
    private:
        int callA;
        void inc(){
            callA++;
        }

    protected:
        void func(int & a)
        {
            a = a * 2;
            inc();
        }
    public:
        int getA(){
            return callA;
        }
};
```


In class *B*, _func_ multiplies the value passed as a parameter by $3$:

   
```cpp14
class B
{
    public:
        B(){
            callB = 0;
        }
    private:
        int callB;
        void inc(){
            callB++;
        }
    protected:
        void func(int & a)
        {
            a = a * 3;
            inc();
        }
    public:
        int getB(){
            return callB;
        }
};
```

     
In class *C*, _func_ multiplies the value passed as a parameter by $5$:

```cpp14
class C
{
    public:
        C(){
            callC = 0;
        }
    private:
        int callC;
        void inc(){
            callC++;
        }
    protected:
        void func(int & a)
        {
            a = a * 5;
            inc();
        }
    public:
        int getC(){
            return callC;
        }
};
```

  
You are given a class *D*:

    
```cpp14
class D 
{

	int val;
	public:
		//Initially val is 1
		 D()
		 {
		 	val = 1;
		 }


		 //Implement this function
		 void update_val(int new_val)
		 {

			
		 }
		 //For Checking Purpose
		 void check(int); //Do not delete this line.
};
```


You need to modify the class *D* and implement the function `update_val`  which sets *D*'s *val* to *new\_val* by manipulating the value by only calling the _func_ defined in classes *A, B* and *C*. 

**It is guaranteed that *new\_val* has only $2, 3$ and $5$ as its prime factors.**



**Input Format**


Implement class *D*'s function *update\_val*. This function should update *D*'s *val* only by calling *A, B* and *C*'s _func_.

**Constraints**  

$1 \le $ *new\_val* $\le 10000 $  
**Note:** The *new\_val* only has $2, 3$ and $5$ as its prime factors.

**Constraints**

  

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-29T14:51:00.416Z  

```cpp

class D : public A, public B, public C
{
    int val;

public:
    D()
    {
        val = 1;
    }

    void update_val(int new_val)
    {
        while (new_val % 2 == 0)
        {
            A::func(val);
            new_val /= 2;
        }

        while (new_val % 3 == 0)
        {
            B::func(val);
            new_val /= 3;
        }

        while (new_val % 5 == 0)
        {
            C::func(val);
            new_val /= 5;
        }
    }

    void check(int); // Do not delete this line.
};

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/accessing-inherited-functions/problem)