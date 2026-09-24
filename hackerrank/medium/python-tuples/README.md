# Lists

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

**Task**  
Given an integer, $n$, and $n$ space-separated integers as input, create a tuple, $t$, of those $n$ integers. Then compute and print the result of $hash(t)$.  

**Note:** [hash()](https://docs.python.org/3/library/functions.html#hash) is one of the functions in the `__builtins__` module, so it need not be imported.  

**Input Format**

The first line contains an integer, $n$, denoting the number of elements in the tuple.	 			
The second line contains $n$ space-separated integers describing the elements in tuple $t$.  

**Constraints**

 

**Output Format**

Print the result of $hash(t)$.

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-24T15:15:04.660Z  

```py
if __name__ == '__main__':
    N = int(input())
    my_list = []

    for _ in range(N):
        command = input().split()

        if command[0] == "insert":
            my_list.insert(int(command[1]), int(command[2]))

        elif command[0] == "print":
            print(my_list)

        elif command[0] == "remove":
            my_list.remove(int(command[1]))

        elif command[0] == "append":
            my_list.append(int(command[1]))

        elif command[0] == "sort":
            my_list.sort()

        elif command[0] == "pop":
            my_list.pop()

        elif command[0] == "reverse":
            my_list.reverse()

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/python-tuples/problem)