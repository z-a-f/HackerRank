#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    int N;
    cin >> N;
    
    // Get values:
    vector <long long int> ar;
    long long int dummy;
    long long int initSum = 0;
    long long int sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> dummy;
        ar.push_back(dummy);
        initSum += dummy;
        sum += dummy*(i+1);
    }

    long long int max = sum;
    for (int shift = 1; shift <= N; shift++) {
        // shiftIn = ar[N-shift];
        dummy = sum + initSum - ar[N-shift]*N;// + shiftIn;
        if (dummy > max)
            max = dummy;
        sum = dummy;
    }
    
    cout << max;
    
    
}