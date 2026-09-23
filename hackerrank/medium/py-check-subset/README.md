# Check Subset

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given two sets, $A$ and $B$.   
Your job is to find whether set $A$ is a subset of set $B$.<br>  
If set $A$ is subset of set $B$, print __True__.<br>
If set $A$ is not a subset of set $B$, print __False__.



**Input Format**

The first line will contain the number of test cases, $T$. <br>
The first line of each test case contains the number of elements in set $A$.<br>
The second line of each test case contains the space separated elements of set $A$.<br>
The third line of each test case contains the number of elements in set $B$.<br>
The fourth line of each test case contains the space separated elements of set $B$.<br>

**Constraints**

+ $0 < T < 21$ 
+ $0 < \text{Number of elements in each set} < 1001$

**Output Format**

Output __True__ or __False__ for each test case on separate lines.

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-23T17:15:52.998Z  

```py
for _ in range(int(input())):
    n = int(input())
    A = set(map(int, input().split()))

    m = int(input())
    B = set(map(int, input().split()))

    print(A.issubset(B))

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/py-check-subset/problem)