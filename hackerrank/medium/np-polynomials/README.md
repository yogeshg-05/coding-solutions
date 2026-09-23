# Polynomials

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

[__poly__](http://docs.scipy.org/doc/numpy/reference/generated/numpy.poly.html)

The *poly* tool returns the coefficients of a polynomial with the given sequence of roots.

	print numpy.poly([-1, 1, 1, 10])		#Output : [  1 -11   9  11 -10]

---
[__roots__](http://docs.scipy.org/doc/numpy/reference/generated/numpy.roots.html)  

The *roots* tool returns the roots of a polynomial with the given coefficients.

	print numpy.roots([1, 0, -1])			#Output : [-1.  1.]
 
 ---
[__polyint__](http://docs.scipy.org/doc/numpy/reference/generated/numpy.polyint.html)

The *polyint* tool returns an antiderivative (indefinite integral) of a polynomial.
	
	print numpy.polyint([1, 1, 1])			#Output : [ 0.33333333  0.5         1.          0.        ]
  
---  
[__polyder__](http://docs.scipy.org/doc/numpy/reference/generated/numpy.polyder.html#numpy.polyder)    

The *polyder* tool returns the derivative of the specified order of a polynomial.

	print numpy.polyder([1, 1, 1, 1])		#Output : [3 2 1]

---

[__polyval__](http://docs.scipy.org/doc/numpy/reference/generated/numpy.polyval.html#numpy.polyval)

The *polyval* tool evaluates the polynomial at specific value.

	print numpy.polyval([1, -2, 0, 2], 4)	#Output : 34

---
[__polyfit__](http://docs.scipy.org/doc/numpy/reference/generated/numpy.polyfit.html)

The *polyfit* tool fits a polynomial of a specified order to a set of data using a least-squares approach.

	print numpy.polyfit([0,1,-1, 2, -2], [0,1,1, 4, 4], 2)
    #Output : [  1.00000000e+00   0.00000000e+00  -3.97205465e-16]

The functions [polyadd](http://docs.scipy.org/doc/numpy/reference/generated/numpy.polyadd.html#numpy.polyadd), [polysub](http://docs.scipy.org/doc/numpy/reference/generated/numpy.polysub.html#numpy.polysub), [polymul](http://docs.scipy.org/doc/numpy/reference/generated/numpy.polymul.html), and [polydiv](http://docs.scipy.org/doc/numpy/reference/generated/numpy.polydiv.html#numpy.polydiv) also handle proper addition,
subtraction, multiplication, and division of polynomial coefficients, respectively.
    
---    
__Task__  

You are given the coefficients of a polynomial $P$.  
Your task is to find the value of $P$ at point $x$.

**Input Format**

The first line contains the space separated value of the coefficients in $P$.  
The second line contains the value of $x$.

**Output Format**

Print the desired value.

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-23T19:05:05.350Z  

```py
# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy as np

P = list(map(float, input().split()))
x = float(input())

print(np.polyval(P, x))

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/np-polynomials/problem)