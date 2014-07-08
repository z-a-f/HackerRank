#include <iostream>

using namespace std;

#define RANGE 100

int main() {
    // int k = RANGE;  // counter size
    int N;  // Number of elements in an array;
    
    cin >> N;
    
    // Get unsorrted array:
    short A[N];
    string str[N];
    int C[RANGE] = {0};
    for (int i = 0; i < N; i++){
        cin >> A[i] >> str[i];
        C[A[i]]++;
        if (i < N/2)
            str[i] = "-";
    }
    
    for (unsigned short i = 1; i < RANGE; i++) {
        C[i] += C[i-1];
    }

    // Create sorted array:
    // short B[N];
    string strB[N];
    
    for (int i = N-1; i >= 0; i--) {
        // cout << N << ' ' << i << endl;
        C[A[i]] -= 1;
        // B[C[A[i]]] = A[i];
        strB[C[A[i]]] = str[i];
        
    }
    
    
    for (int i = 0; i < N; i++) {
        cout << strB[i] << " ";
    }
    
}