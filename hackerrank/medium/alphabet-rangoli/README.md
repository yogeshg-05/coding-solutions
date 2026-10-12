# Alphabet Rangoli

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer, $N$. Your task is to print an alphabet rangoli of size $N$.
(Rangoli is a form of Indian folk art based on creation of patterns.)

Different sizes of alphabet rangoli are shown below:

```
#size 3

----c----
--c-b-c--
c-b-a-b-c
--c-b-c--
----c----

#size 5

--------e--------
------e-d-e------
----e-d-c-d-e----
--e-d-c-b-c-d-e--
e-d-c-b-a-b-c-d-e
--e-d-c-b-c-d-e--
----e-d-c-d-e----
------e-d-e------
--------e--------

#size 10

------------------j------------------
----------------j-i-j----------------
--------------j-i-h-i-j--------------
------------j-i-h-g-h-i-j------------
----------j-i-h-g-f-g-h-i-j----------
--------j-i-h-g-f-e-f-g-h-i-j--------
------j-i-h-g-f-e-d-e-f-g-h-i-j------
----j-i-h-g-f-e-d-c-d-e-f-g-h-i-j----
--j-i-h-g-f-e-d-c-b-c-d-e-f-g-h-i-j--
j-i-h-g-f-e-d-c-b-a-b-c-d-e-f-g-h-i-j
--j-i-h-g-f-e-d-c-b-c-d-e-f-g-h-i-j--
----j-i-h-g-f-e-d-c-d-e-f-g-h-i-j----
------j-i-h-g-f-e-d-e-f-g-h-i-j------
--------j-i-h-g-f-e-f-g-h-i-j--------
----------j-i-h-g-f-g-h-i-j----------
------------j-i-h-g-h-i-j------------
--------------j-i-h-i-j--------------
----------------j-i-j----------------
------------------j------------------
```

The center of the rangoli has the first alphabet letter *a*, and the boundary has the $N$$^{th}$ alphabet letter (in alphabetical order).   

**Function Description**   

Complete the *rangoli* function in the editor below.   

*rangoli* has the following parameters:   

- *int size:*  the size of the rangoli  

**Returns**   

- *string:* a single string made up of each of the lines of the rangoli separated by a newline character (\n)

**Input Format**

Only one line of input containing $size$, the size of the rangoli.


**Constraints**

$ 0 < size < 27 $

**Output Format**

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-12T10:32:55.695Z  

```py
def print_rangoli(size):
    import string

    alphabet = string.ascii_lowercase
    lines = []

    for i in range(size):
        row = '-'.join(
            alphabet[size - 1:j:-1] + alphabet[j:size]
            for j in []
        )

    for i in range(size):
        left = alphabet[size - 1:size - i - 1:-1]
        right = alphabet[size - i - 1:size]
        row = '-'.join(left + right)
        lines.append(row.center(4 * size - 3, '-'))

    print('\n'.join(lines + lines[-2::-1]))


```

---

[View on HackerRank](https://www.hackerrank.com/challenges/alphabet-rangoli/problem)