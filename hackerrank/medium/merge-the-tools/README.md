# Merge the Tools!

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Consider the following:

- A string, $s$, of length $n$ where $s = c_0 c_1 \ldots c_{n - 1}$.
- An integer, $k$, where $k$ is a factor of $n$.

We can split $s$ into $\frac{n}{k}$ substrings where each subtring, $t_i$, consists of a contiguous block of $k$ characters in $s$. Then, use each $t_i$ to create string $u_i$ such that:

- The characters in $u_i$ are a subsequence of the characters in $t_i$. 
- Any repeat occurrence of a character is removed from the string such that each character in $u_i$ occurs exactly once. In other words, if the character at some index $j$ in $t_i$ occurs at a previous index $\lt j$ in $t_i$, then do not include the character in string $u_i$.

Given $s$ and $k$, print $\frac{n}{k}$ lines where each line $i$ denotes string $u_i$.  

**Example**  
$s = \text{'AAABCADDE'}$  
$k = 3$  

There are three substrings of length $3$ to consider: 'AAA', 'BCA' and 'DDE'.  The first substring is all 'A' characters, so $u_1 = \text{'A'}$.  The second substring has all distinct characters, so $u_2 = \text{'BCA'}$.  The third substring has $2$ different characters, so $u_3 = \text{'DE'}$.  Note that a subsequence maintains the original order of characters encountered.  The order of characters in each subsequence shown is important.  

**Function Description**  

Complete the *merge_the_tools* function in the editor below.  

*merge_the_tools* has the following parameters:  

- *string s:* the string to analyze  
- *int k:* the size of substrings to analyze  

**Prints**  

Print each subsequence on a new line.  There will be $\frac{n}{k}$ of them.  No return value is expected.  

**Input Format**

The first line contains a single string, $s$.		
The second line contains an integer, $k$, the length of each substring.

**Constraints**

- $1\le n \le 10^{4}$, where $n$ is the length of $s$
- $1\le k \le n$ 
- It is guaranteed that $n$ is a multiple of $k$. 

**Output Format**

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-15T10:34:49.413Z  

```py
def merge_the_tools(string, k):
    for i in range(0, len(string), k):
        substring = string[i:i + k]
        result = ""
        for char in substring:
            if char not in result:
                result += char
        print(result)


```

---

[View on HackerRank](https://www.hackerrank.com/challenges/merge-the-tools/problem)