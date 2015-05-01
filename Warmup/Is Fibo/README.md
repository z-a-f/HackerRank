https://www.hackerrank.com/challenges/is-fibo

You are given an integer, N. Find out if the number is an element of fibonacci series.

The first few elements of fibonacci series are 0,1,1,2,3,5,8,13.... A fibonacci series is one where every element is a sum of the previous two elements in the series. The first two elements are 0 and 1.

Formally:

fib0 = 0 
fib1 = 1 
fibn = fibn-1 + fibn-2 ∀ n > 1

Input Format 
The first line contains T, number of test cases. 
T lines follows. Each line contains an integer N.

Output Format 
Display "IsFibo" (without quotes) if N is a fibonacci number and "IsNotFibo" (without quotes) if it is not a fibonacci number. The output for each test case should be displayed on a new line.

1 <= T <= 105 
1 <= N <= 1010

Sample Input

3
5
7
8
Sample Output

IsFibo
IsNotFibo
IsFibo
Explanation 
5 is a Fibonacci number given by fib5 = 3 + 2 
7 is not a Fibonacci number 
8 is a Fibonacci number given by fib6 = 5 + 3

TimeLimits Timelimits for this challenge is given here

