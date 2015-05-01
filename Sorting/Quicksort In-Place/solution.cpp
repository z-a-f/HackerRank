#include <iostream>
#include <vector>

#include "quicksortInPlace.hpp"

#define PRINT_AFTER_PARTITION true

using namespace std;

int main() {
  int N, num;
  vector<int> ar;
  cin >> N;
  for (int i = 0; i < N; i++) {
	cin >> num;
	ar.push_back(num);
  }
  // print(ar);
  quicksort(ar, 0, N-1, PRINT_AFTER_PARTITION);
  // swap(ar[0], ar[1]);
  // print(ar);
}
