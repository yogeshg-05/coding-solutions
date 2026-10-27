# Deque-STL

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

A template parameter pack is a template parameter that accepts zero or more template arguments (non-types, types, or templates). To read more about parameter pack, [click here](http://en.cppreference.com/w/cpp/language/parameter_pack).

Create a template function named <em>reversed_binary_value</em>. It must take an arbitrary number of *bool* values as template parameters. These booleans represent binary digits in reverse order. Your function must return an integer corresponding to the binary value of the digits represented by the booleans. For example:  <em>reversed_binary_value<0,0,1>()</em> should return $4$.

**Input Format**

The first line contains an integer, $t$, the number of test cases.
Each of the $t$ subsequent lines contains a test case. A test case is described as $2$ space-separated integers, $x$ and $y$, respectively.

* $x$ is the value to compare against.
* $y$ represents the range to compare: $64 \times y$ to $64\times y+63$.

**Constraints**

- $0 \le x \le 65535$  
- $0 \le y \le 1023$
- The number of template parameters passed to <em>reversed_binary_value</em> will be $\le 16$.

**Output Format**

Each line of output contains $64$ binary characters (i.e., $0$'s and $1$'s). Each character represents one value in the range. The *first* character corresponds to the *first* value in the range. The *last* character corresponds to the *last* value in the range. The character is $1$ if the value in the range matches $X$; otherwise, the character is $0$.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-27T17:58:54.226Z  

```cpp
#include <iostream>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k) {
    deque<int> dq;

    for (int i = 0; i < n; i++) {
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        while (!dq.empty() && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }

        dq.push_back(i);

        if (i >= k - 1) {
            cout << arr[dq.front()];
            if (i < n - 1) {
                cout << " ";
            }
        }
    }
    cout << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        printKMax(arr, n, k);
    }

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/cpp-variadics/problem)