### Problem Statement

You are given a list of `N` numbers `a1,a2,…,an`. For each `i (1≤i≤N)`, define `LEFT(i)` to be the nearest index `j` before `i` such that a<sub>j</sub>>a<sub>i</sub>. Note that if `j` does not exist, we should consider `LEFT(i)` to be `0`. Similarly, define `RIGHT(i)` to be the nearest index `k` after `i` such that a<sub>k</sub>>a<sub>i</sub>. Note that if `k` does not exist, we should consider `RIGHT(i)` to be `0`.

Define `INDEXPRODUCT(i)` as the product of `LEFT(i)` and `RIGHT(i)`. Find the maximum `INDEXPRODUCT(i)` among all `1≤i≤N`.

### Input Format

The first line contains an integer `N`, the number of integers. The next line contains the `N` integers.

Constraints:

1≤N≤10<sup>5</sup>
Each of the `N` integers will range from 0 to 10<sup>9</sup>

### Output Format

Output the maximum `INDEXPRODUCT` among all indices from 1 to N.

### Example

##### Sample Input
```
5
5 4 3 4 5
Sample Output
```

##### Sample Output
`8`


##### Explanation

We can compute the following:
```
INDEXPRODUCT(1)=0 
INDEXPRODUCT(2)=1×5=5 
INDEXPRODUCT(3)=2×4=8 
INDEXPRODUCT(4)=1×5=5 
INDEXPRODUCT(5)=0
```