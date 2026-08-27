# Bit Array

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given four integers: $N$, $S$, $P$, $Q$. You will use them in order to create the sequence $a$ with the following pseudo-code.

	a[0] = S (modulo 2^31)
    for i = 1 to N-1
    	a[i] = a[i-1]*P+Q (modulo 2^31) 
    	
Your task is to calculate the number of distinct integers in the sequence $a$.
    



**Input Format**

Four space separated integers on a single line, $N$, $S$, $P$, and $Q$ respectively.

**Output Format**

A single integer that denotes the number of distinct integers in the sequence $a$.

**Constraints**  

$1 \leq N \leq 10^8$<br></br>
$0 \leq S,P,Q < 2^{31}$<br></br>

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-27T06:32:42.185Z  

```cpp
#include <iostream>
using namespace std;

int main() {
    unsigned int N, S, P, Q;
    cin >> N >> S >> P >> Q;

    const unsigned int MASK = 0x7FFFFFFF;
    const int SIZE = 1 << 26;

    static unsigned int bits[SIZE];

    unsigned int count = 0;
    unsigned int x = S;

    for (unsigned int i = 0; i < N; i++) {
        unsigned int index = x >> 5;
        unsigned int bit = 1u << (x & 31);

        if (!(bits[index] & bit)) {
            bits[index] |= bit;
            count++;
        }

        x = (x * P + Q) & MASK;
    }

    cout << count;

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/bitset-1/problem)