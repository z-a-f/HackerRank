#include <iostream>
#include <cmath>

using namespace std;

unsigned long findDigits(unsigned long N) {
    
    unsigned long num = N;
    unsigned long digits = 0;
    unsigned long mod;
    do {
        mod = num % 10;
        if (mod != 0 && N % mod == 0) digits++;
        num = (unsigned long)floor(num / 10);
        // cout << num << endl;
    } while (num > 0);
    return digits;
    
    return N;
}

int main() {
    int T;
    cin >> T;
    
    unsigned long N;
    // N = 114108089;
    while (T--) {
        cin >> N;
        // cout << N << endl;
        cout << findDigits(N) << endl;
    }
}