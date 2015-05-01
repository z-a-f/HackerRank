https://www.hackerrank.com/challenges/sherlock-and-pairs

Sherlock is given an array of N integers A , A ... A by Watson. Now Watson asks Sherlock that how many different pairs of
indices i and j exist such that i is not equal to j but A is equal to A.
That is, Sherlock has to count total number of pairs of indices (i, j) where A = A AND i ≠ j.
Input Format
First line contains T, the number of testcases. T test case follows.
Each testcase consists of two lines, first line contains an integer N, size of array.
Next line contains N space separated integers.
Output Format
For each testcase, print the required answer in different line.
Constraints
1 ≤ T ≤ 10
1 ≤ N ≤ 10
1 ≤ A[i] ≤ 10
Sample input
2
3
1 2 3
3
1 1 2
Sample output
0
2
Explanation
In the first testcase, no two pair of indices exist which satisfy the given property.
In second testcase as A[0] = A[1] = 1, the pairs of indices (0,1) and (1,0) satisfy the given property.
