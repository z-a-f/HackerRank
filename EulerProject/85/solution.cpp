#include <cmath>
#include <cstdio>
#include <climits>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
	int closestarea = 0;
	int target;
	cin >> target;
	int x = 2000;
	int y = 1;
	// int error = INT_MAX;
	int error = target;

	while (x >= y) {
	  int rects = x * (x + 1) * y * (y + 1) / 4;

	  if (error > abs(rects - target)) {
		closestarea = x * y;
		error = abs(rects - target);
	  } else if (error == abs(rects - target)) {
		if (closestarea < x * y) {
		  closestarea = x * y;
		}
	  }

	  if (rects > target)
		x--;
	  else
		y++;
	}
	cout << closestarea << endl;
  }
  return 0;
}
