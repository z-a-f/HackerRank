#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void printArray (vector<int> ar, int len) {
    for (int i = 0; i < len; i++) {
        cout << ar[i] << ' ';
    }
    cout << endl;
}

void insertionSort(vector <int>  ar, int len) {
    /*
    for i ? 1 to length(A)
        x ? A[i]
        j ? i
        while j > 0 and A[j-1] > x
            A[j] ? A[j-1]
            j ? j - 1
        A[j] ? x
    */
    int i = len-1; // Working with the last digit only
    
    int j = i; // Starting point is the last one
    int value = ar[i];
    while (j > 0 && ar[j-1] > value) {
        ar[j] = ar[j-1];
        j--;
        printArray(ar, len);
    }
    ar[j] = value;
    printArray(ar, len);
}

int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar, _ar_size);
    
    return 0;
}
