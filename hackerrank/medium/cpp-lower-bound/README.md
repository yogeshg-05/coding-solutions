# Lower Bound-STL

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given $N$ integers in sorted order. Also, you are given $Q$ queries. In each query, you will be given an integer and you have to tell whether that integer is present in the array. If so, you have to tell at which index it is present and if it is not present, you have to tell the index at which the smallest integer that is just greater than the given number is present.

Lower bound is a function that can be used with a sorted vector. Learn how to use lower bound to solve this problem by [clicking here](http://www.cplusplus.com/reference/algorithm/lower_bound/).


**Input Format**

The first line of the input contains the number of integers $N$. The next line contains $N$ integers in sorted order. The next line contains $Q$, the number of queries. Then $Q$ lines follow each containing a single integer $Y$.<br>

Note: If the same number is present multiple times, you have to print the first index at which it occurs. Also, the input is such that you always have an answer for each query.


**Constraints**

- $1 \le N \le 10^5$<br>
- $1 \le X_i \le 10^9$,where $X_i$ is $i^{th}$ element in the array.<br>
- $1 \le Q \le 10^5$<br>
- $1 \le Y \le 10^9$<br>


**Output Format**

For each query you have to print "Yes" (without the quotes) if the number is present and at which index(1-based) it is present separated by a space.<br>

If the number is not present you have to print "No" (without the quotes) followed by the index of the next smallest number just greater than that number.<br>

You have to output each query in a new line.<br>

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-23T16:08:36.533Z  

```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int Q;
    cin >> Q;

    while (Q--) {
        int Y;
        cin >> Y;

        auto it = lower_bound(v.begin(), v.end(), Y);

        if (it != v.end() && *it == Y) {
            cout << "Yes " << (it - v.begin() + 1) << endl;
        } else {
            cout << "No " << (it - v.begin() + 1) << endl;
        }
    }

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/cpp-lower-bound/problem)