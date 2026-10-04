# Text Alignment

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

In Python, a string of text can be aligned *left, right* and *center*.

__.ljust(width)__

This method returns a left aligned string of length *width*.

	>>> width = 20
	>>> print 'HackerRank'.ljust(width,'-')
    HackerRank----------  

---    
__.center(width)__

This method returns a centered string of length *width*.

	>>> width = 20
	>>> print 'HackerRank'.center(width,'-')
    -----HackerRank-----

---
__.rjust(width)__

This method returns a right aligned string of length *width*.

	>>> width = 20
	>>> print 'HackerRank'.rjust(width,'-')
    ----------HackerRank
    
---
__Task__

You are given a partial code that is used for generating the _HackerRank Logo_ of variable _thickness_.  
Your task is to replace the blank (`______`) with *rjust, ljust* or *center*.




**Input Format**

 A single line containing the _thickness_ value for the logo.
 
 __Constraints__  

The *thickness* must be an *odd* number.  
$ 0 < thickness < 50$

**Output Format**

Output the desired logo.

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-04T06:11:37.501Z  

```py
# Enter your code here. Read input from STDIN. Print output to STDOUT
thickness = int(input())
c = 'H'

# Top Cone
for i in range(thickness):
    print((c * i).rjust(thickness - 1) + c + (c * i).ljust(thickness - 1))

# Top Pillars
for i in range(thickness + 1):
    print((c * thickness).center(thickness * 2) +
          (c * thickness).center(thickness * 6))

# Middle Belt
for i in range((thickness + 1) // 2):
    print((c * thickness * 5).center(thickness * 6))

# Bottom Pillars
for i in range(thickness + 1):
    print((c * thickness).center(thickness * 2) +
          (c * thickness).center(thickness * 6))

# Bottom Cone
for i in range(thickness):
    print(((c * (thickness - i - 1)).rjust(thickness) +
           c +
           (c * (thickness - i - 1)).ljust(thickness)).rjust(thickness * 6))

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/text-alignment/problem)