# Exceptional Server

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

In this challenge, you are required to handle error messages while working with small computational server that performs complex calculations.  
It has a function that takes $2$ large numbers as its input and returns a numeric result. Unfortunately, there are various exceptions that may occur during execution.

Complete the code in your editor so that it prints appropriate error messages, should anything go wrong. The expected behavior is defined as follows:

- If the *compute* function runs fine with the given arguments, then print the result of the function call.  
- If it fails to allocate the memory that it needs, print `Not enough memory`.  
- If any other standard C++ exception occurs, print `Exception: S` where $S$ is the exception's error message.  
- If any non-standard exception occurs, print `Other Exception`.



**Input Format**

The first line contains an integer, $T$, the number of test cases.  
Each of the $T$ subsequent lines describes a test case as $2$ space-separated integers, $A$ and $B$, respectively.

**Constraints**

$1 \le T \le 10^3$  
$0 \le A, B \le 2^{60}$

**Output Format**

For each test case, print a single line containing whichever message described in the *Problem Statement* above is appropriate. After all messages have been printed, the locked stub code in your editor prints the server load.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-21T12:14:50.804Z  

```cpp


		/* Enter your code here. */
        try {
    cout << Server::compute(A, B) << endl;
}
catch (bad_alloc& e) {
    cout << "Not enough memory" << endl;
}
catch (exception& e) {
    cout << "Exception: " << e.what() << endl;
}
catch (...) {
    cout << "Other Exception" << endl;
}


```

---

[View on HackerRank](https://www.hackerrank.com/challenges/exceptional-server/problem)