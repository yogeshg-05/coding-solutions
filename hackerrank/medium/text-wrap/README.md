# Text Wrap

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

<sub>Check [Tutorial](https://www.hackerrank.com/challenges/text-wrap/tutorial) tab to know how to to solve.</sub>  

You are given a string $S$ and width $w$.  
Your task is to wrap the string into a paragraph of width $w$.  

**Function Description**   

Complete the *wrap* function in the editor below.  

*wrap* has the following parameters:   

- *string string:* a long string   
- *int max_width:* the width to wrap to   

**Returns**   

- *string:* a single string with newline characters ('\n') where the breaks should be   

**Input Format**

The first line contains a string, $string$.  
The second line contains the width, $max_width$.



**Constraints**

+ $0 < len(string) < 1000$  
+ $0 < max_width < len(string)$



**Output Format**

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-05T09:21:08.097Z  

```py


def wrap(string, max_width):
    return textwrap.fill(string, max_width)


```

---

[View on HackerRank](https://www.hackerrank.com/challenges/text-wrap/problem)