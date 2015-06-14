#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
 * Example analysis:
 * Input   		= 5 4 3 4 5
 * Left(values) = - 5 4 5 -
 * Left 		= 0 1 2 1 0
 * Right(values)= - 5 4 5 0
 * Right 		= 0 5 4 5 0
 * product		= 0 5 8 5 0
 * Output  		= 8
 */

// O(n^2) solution:
// at every element i, check i-1,i-2,... and put the closest maximum in Left
// at every element i, check i+1,i+2,... and put the closest maximum in Right

int left(vector<int> ar, int i) {
  // Go in the reverse order: i-1, i-2, i-3, ...
  if (i == 0) return 0;
  int temp = i;
  while (temp--) {
	if (ar[temp] > ar[i]) return temp+1;
  }
  return 0;
}
vector<int> LEFT(vector<int> ar) {
  vector<int> out;
  int len = ar.size();
  if (len > 0) out.push_back(0);
  for (int i = 1; i < len; i++) {
	out.push_back(left(ar, i)); // Check everything to the left of i
  }
  return out;
}

int right(vector<int> ar, int i) {
  // Go in normal order: i+1, i+2, i+3, ...
  if (i == ar.size() - 1) return 0;
  int temp = i;
  int len = ar.size();
  while (temp != len-1) {
	temp++;
	if (ar[temp] > ar[i]) return temp+1;
  }
  return temp;
}
vector<int> RIGHT(vector<int> ar) {
  vector<int> out;
  int len = ar.size();
  for (int i = 0; i < len-1; i++) {
	out.push_back(right(ar,i));
  }
  out.push_back(0); // This is the last element, there is nothing to the right
  return out;
}

// We don't need LEFT/RIGHT, we can use the left/right only:
int maxInnerProduct(vector<int> ar) { 
  int max = 0, innerProduct = 0;
  int len = ar.size();
  int l,r;
  for (int i = 0; i < len; i++) {
	l = left(ar, i);
	r = right(ar,i);
	innerProduct = l * r;
	// cout << l << '*' << r << '=' << innerProduct << endl;
	if (innerProduct > max) max = innerProduct;
  }
  return max;
}

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n, num;
  vector<int> ar, leftAr, rightAr;
  cin >> n;
  for (int i =0; i < n; i++) {
	cin >> num;
	ar.push_back(num);
  }
  /*
  for (vector<int>::iterator it = leftAr.begin(); it != leftAr.end(); ++it) {
	cout << *it << ' ';
  }
  cout << endl;
  */
  cout << maxInnerProduct(ar) << endl;

  return 0;
}
