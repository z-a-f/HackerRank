#include <iostream>

using namespace std;

#define RANGE 100

void printArray(int ar[], string name, int len) {
    // cout << name << " = [";
    for (int i = 0; i < len; i++){
        cout << ar[i] << ' ';
    }
    //cout << ']' << endl;
}

int main() {
    int k = RANGE;  // counter size
    int N;  // Number of elements in an array;
    string dummy; // String
    
    cin >> N;
    
    // Get unsorrted array:
    int A[N];
    int C[RANGE] = {0};
    for (int i = 0; i < N; i++){
        cin >> A[i] >> dummy;
        C[A[i]]++;
    }
    
    for (int i = 1; i < k; i++) {
        C[i] += C[i-1];
    }
    
    printArray(C, "C", RANGE);
    /*
    // Create sorted array:
    int B[N];
    
    for (int i = N-1; i >= 0; i--) {
        // cout << N << ' ' << i << endl;
        C[A[i]] -= 1;
        B[C[A[i]]] = A[i];
    }
    
    
    for (int i = 0; i < N; i++) {
        cout << B[i] << " ";
    }
    */
}