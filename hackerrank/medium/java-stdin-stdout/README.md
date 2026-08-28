# Java If-Else

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

In this challenge, you must read an *integer*, a *double*, and a *String* from stdin, then print the values according to the instructions in the *Output Format* section below. To make the problem a little easier, a portion of the code is provided for you in the editor.

**Note:** We recommend completing [Java Stdin and Stdout I](https://www.hackerrank.com/challenges/java-stdin-and-stdout-1) before attempting this challenge.

**Input Format**

There are three lines of input:		

1. The first line contains an *integer*.		
2. The second line contains a *double*. 	
3. The third line contains a *String*.

**Constraints**

 

**Output Format**

There are three lines of output:

1. On the first line, print `String: ` followed by the unaltered *String* read from stdin.		
2. On the second line, print `Double: ` followed by the unaltered *double* read from stdin.		
3. On the third line, print `Int: ` followed by the unaltered *integer* read from stdin.

To make the problem easier, a portion of the code is already provided in the editor. 	

**Note:** If you use the *nextLine()* method immediately following the *nextInt()* method, recall that *nextInt()* reads integer tokens; because of this, the last newline character for that line of integer input is still queued in the input buffer and the next *nextLine()* will be reading the remainder of the integer line (which is empty).

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-28T13:21:14.965Z  

```java
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        if (n % 2 != 0) {
            System.out.println("Weird");
        } else if (n >= 2 && n <= 5) {
            System.out.println("Not Weird");
        } else if (n >= 6 && n <= 20) {
            System.out.println("Weird");
        } else {
            System.out.println("Not Weird");
        }

        scanner.close();
    }
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/java-stdin-stdout/problem)