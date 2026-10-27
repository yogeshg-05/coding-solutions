# Deque-STL

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Double ended queue or Deque(part of C++ STL) are sequence containers with dynamic sizes that can be expanded or contracted on both ends (either its front or its back). The member functions of deque that are mainly used are:

- *Deque Template:*

		std::deque<value_type>


- *Declaration:*

		deque<int> mydeque; //Creates a double ended queue of deque of int type

- *Size*

		int length = mydeque.size(); //Gives the size of the deque


- *Push*

		mydeque.push_back(1); //Pushes element at the end
		mydeque.push_front(2); //Pushes element at the beginning


- *Pop*

        mydeque.pop_back(); //Pops element from the end
        mydeque.pop_front(); //Pops element from the beginning


- *Empty*

		mydeque.empty() //Returns a boolean value which tells whether the deque is empty or not


To know more about deque, [click here](http://www.cplusplus.com/reference/deque/deque/)

Given a set of arrays of size $N$ and an integer $K$, you have to find the maximum integer for each and every contiguous subarray of size $K$ for each of the given arrays.

**Input Format**

First line of input will contain the number of test cases *T*. For each test case, you will be given the size of array *N* and the size of subarray to be used *K*. This will be followed by the elements of the array *A<sub>i</sub>*.

**Constraints**  
$1 <= T <= 1000$  
$1 <= N <= 10000$  
$1 <= K <= N$  
$1 <= A_i <= 10000$ , where $A_i$ is the $i^{th}$ element in the array $A$.  

**Output Format**

For each of the contiguous subarrays of size $K$ of each array, you have to print the maximum integer.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-27T17:58:48.571Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/deque-stl/problem)