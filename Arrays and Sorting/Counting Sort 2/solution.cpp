#include <iostream>

using namespace std;

#define RANGE 100
/*
StableCountingSort
    for i = 0 to k - 1
        C[i] = 0;
    for i = 0 to n - 1
        C[A[i]] = C[A[i]] + 1;
    for j = 1 to k - 1
        C[j] = C[j] + C[j - 1];
    for i = n - 1 to 0
        C[A[i]] = C[A[i]] - 1;
        B[C[A[i]]] = A[i];
*/
int main() {
    int k = RANGE;  // counter size
    int N;  // Number of elements in an array;
    
    cin >> N;
    
    // Get unsorrted array:
    int A[N];
    int C[RANGE] = {0};
    for (int i = 0; i < N; i++){
        cin >> A[i];
        C[A[i]]++;
    }
    
    for (int i = 1; i < k; i++) {
        C[i] += C[i-1];
    }

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
    
}