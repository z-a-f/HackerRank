#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef vector<bool> vecB;
typedef vecB::iterator vecBIT;
typedef vector<vecB> vec;
typedef vec::iterator vecIT;

vec A;
vec B;
int rows, cols;


void print (vec A) {
  cout << "-----------------\n";
  for (vecIT it = A.begin(); it != A.end(); ++it) {
	for (vecBIT jt = it->begin(); jt != it->end(); ++jt) {
	  cout << *jt << ' ';
	}
	cout << endl;
  }
}

int checkSegment(int ii, int jj, int currentSum = 0) {
  /** We are going to go:
   * 1) √ Up (i--)
   * 2) √ Up-Right (i--, j++)
   * 3) √ Right (j++)
   * 4) √ Down-Right (i++, j++)
   * 5) √ Down (i++)
   * 6) √ Down-Left (i++, j--)
   * 7) √ Left (j--)
   * 8) √ Up-Left (i--, j--)
   */
  // int cols = A[0].size(); // 4
  // int rows = A.size(); // 5
  // cout << "Cols: " << cols << endl;
  // cout << "Rows: " << rows << endl;
  // cout << "ii, jj: " << ii << ' ' << jj << endl;
  if (A[ii][jj] && !B[ii][jj]) {
	currentSum++;
	B[ii][jj] = true; // checked this one
	// print (B);
	// cout << currentSum << endl;
	// Up side:
	if (ii != 0) {
	  // Case 1)
	  // cout << "Case: 1) ii, jj: " << ii << ' ' << jj << endl;
	  currentSum = checkSegment(ii-1, jj, currentSum);
	  // Case 2)
	  if (jj < cols-1 && jj >= 0){
		// cout << "Case: 2) ii, jj: " << ii << ' ' << jj << endl;
		currentSum = checkSegment(ii-1, jj+1, currentSum);
	  }
	  // Case 8)
	  if (jj != 0) {
		// cout << "Case: 8) ii, jj: " << ii << ' ' << jj << endl;
		currentSum = checkSegment(ii-1, jj-1, currentSum);
	  }
	}
	// Down side:
	if (ii < rows-1 && ii >= 0) {
	  // Case 5)
	  // cout << "Case: 5) ii, jj: " << ii << ' ' << jj << endl;
	  currentSum = checkSegment(ii+1, jj, currentSum);
	  // Case 4)
	  if (jj < cols-1 && jj >= 0){
		// cout << "Case: 4) ii, jj: " << ii << ' ' << jj << endl;
		currentSum = checkSegment(ii+1, jj+1, currentSum);
	  }
	  // Case 6)
	  if (jj != 0) {
		// cout << "Case: 6) ii, jj: " << ii << ' ' << jj << endl;
		currentSum = checkSegment(ii+1, jj-1, currentSum);
	  }
	}
	// Left-Right side:
	// Case 3)
	if (jj < cols-1 && jj >= 0) currentSum = checkSegment(ii, jj+1, currentSum);
	if (jj != 0) currentSum = checkSegment(ii, jj-1, currentSum);
  }
  return currentSum;
}

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
  // Get the values:
  // int rows, cols;
  bool num;
  int sum;
  cin >> rows >> cols;
    
  // A holds the values, B is used to check if it was traversed already
  // vec A; 
  // vec B (n, vector<bool>(m, false));
  B = vec(rows, vector<bool>(cols, false));
  vector<bool> temp;
    
  for (int i = 0; i < rows; i++) {
	temp.clear();
	for (int j = 0; j < cols; j++) {
	  cin >> num;
	  temp.push_back(num);
	}
	A.push_back(temp);
  }
    
  // Start checking segments
  int maxSegment = 0;
  for (int ii = 0; ii < rows; ii++) {
	for (int jj = 0; jj < cols; jj++) {
	  if (B[ii][jj]) continue; // checked already, skip
	  if (A[ii][jj]) {
		sum = checkSegment(ii,jj);
		if (sum > maxSegment) maxSegment = sum;	
	  }
	  B[ii][jj] = true;
	}
  }
  // print (B);
  cout << maxSegment << endl;
    
  return 0;
}
