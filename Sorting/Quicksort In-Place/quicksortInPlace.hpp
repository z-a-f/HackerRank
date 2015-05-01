#ifndef _QUICKSORT_IN_PLACE_HPP_
#define _QUICKSORT_IN_PLACE_HPP_

#include <vector>

typedef std::vector<int> vec;

void print (vec ar) {
  for (vec::iterator it = ar.begin(); it != ar.end(); it++) {
	std::cout << *it << ' ';
  }
  std::cout << std::endl;
}


void swap (int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int choosePivot(vec ar, int lo, int hi) {
  return hi; // The simplest method
}

int partition(vec &ar, int lo, int hi) {
  int pivotIndex = choosePivot(ar, lo, hi);
  int pivotValue = ar[pivotIndex];
  swap(ar[pivotIndex], ar[hi]);

  int storeIndex = lo;
  for (int ii = lo; ii <= hi-1; ii++) {
	if (ar[ii] <= pivotValue) {
	  swap(ar[ii], ar[storeIndex]);
	  storeIndex++;
	  // std::cout << "swapped " << ar[ii] << " and " << ar[storeIndex] << std::endl;
	}
  }
  swap(ar[storeIndex], ar[hi]);
  return storeIndex;
}

void quicksort(vec &ar, int lo, int hi, bool printAfterPartition = false) {
  int p;
  if (lo < hi) {
	p = partition(ar, lo, hi);
	if (printAfterPartition) print(ar);
	quicksort(ar, lo, p-1, printAfterPartition);
	quicksort(ar, p+1, hi, printAfterPartition);
  }
}

#endif
