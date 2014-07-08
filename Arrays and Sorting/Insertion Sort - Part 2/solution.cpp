#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;

void printArray (int * ar, int len) {
    for (int i = 0; i < len; i++) {
        cout << ar[i] << ' ';
    }
    cout << endl;
}


void insertionSort(int ar_size, int *  ar) {
    for (int i = 1; i < ar_size; i++) {
        int j = i;
        int value = ar[i];
        while (j > 0 && ar[j-1] > value) {
            ar[j] = ar[j-1];
            j--;
            // printArray(ar, ar_size);
        }
        ar[j] = value;
        printArray(ar, ar_size);
    }

}
int main(void) {
   
    int _ar_size;
    cin >> _ar_size;
    //scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]); 
    }

   insertionSort(_ar_size, _ar);
   
   return 0;
}
