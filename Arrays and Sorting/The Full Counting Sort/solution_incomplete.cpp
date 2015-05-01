/* This version will return a Segmentation Fault with "input05.txt" */

#include <iostream>

using namespace std;

#define RANGE 100
#define WORDLEN 10


int main() {
    // int k = RANGE;  // counter size
    int N;  // Number of elements in an array;
    
    cin >> N;
    
    // Get unsorrted array:
    short A[N];
    // string str[N];
    char str[N/2][WORDLEN];
    char temp[1][WORDLEN];
    
    int C[RANGE] = {0};
    for (int i = 0; i < N; i++){
        cin >> A[i] >> temp[0];
        C[A[i]]++;
        if (i >= N/2) {
        	strcpy(str[i-N/2], temp[0]);
        }
        /*
        if (i < N/2)
            //str[i] = "-";
            strcpy(str[i], "-");
        */
    }
    
    for (int i = 1; i < RANGE; i++) {
        C[i] += C[i-1];
    }

    // Create sorted array:
    // short B[N];
    // string strB[N];
    char strB[N][WORDLEN];
    
    for (int i = N-1; i >= 0; i--) {
        // cout << N << ' ' << i << endl;
        C[A[i]] -= 1;
        // B[C[A[i]]] = A[i];
        // strB[C[A[i]]] = str[i];
        if (i >= N/2)
	        strcpy(strB[C[A[i]]], str[i-N/2]);
	    else
	    	strcpy(strB[C[A[i]]], "-");
        
    }
    
    for (int i = 0; i < N; i++) {
        cout << strB[i] << " ";
    }
    
}
