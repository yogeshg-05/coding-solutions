# Print Pretty

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a text file with many lines of numbers to format and print, for each row of $3$ space-separated doubles, format and print the numbers using the specifications in the *Output Format* section below.

**Input Format**

The first line contains an integer, $T$, the number of test cases.  
Each of the $T$ subsequent lines describes a test case as $3$ space-separated floating-point numbers: $A$, $B$, and $C$, respectively.

**Constraints**

- $1 \le T \le 1000$  
- Each number will fit into a double.

**Output Format**

For each test case, print $3$ lines containing the formatted $A$, $B$, and $C$, respectively. Each $A$, $B$, and $C$ must be formatted as follows:

1. $A$: Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the $\texttt{0x}$ prefix) in lower case letters.
2. $B$: Print it to a scale of $2$ decimal places, preceded by a $+$ or $-$ sign (indicating if it's positive or negative), right justified, and left-padded with underscores so that the printed result is exactly $15$ characters wide.
3. $C$: Print it to a scale of exactly nine decimal places, expressed in scientific notation using upper case.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-18T09:18:28.959Z  

```cpp

// Format A: Hexadecimal, lowercase, with 0x prefix, truncated to integer
        cout << hex << left << showbase << nouppercase;
        cout << (long long)A << endl;

        // Format B: 2 decimal places, with +/- sign, right justified, 15 chars wide, padded with '_'
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2);
        cout << B << endl;

        // Format C: 9 decimal places, scientific notation, uppercase 'E', no forced sign
        cout << scientific << uppercase << noshowpos << setprecision(9);
        cout << C << endl;

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/prettyprint/problem)