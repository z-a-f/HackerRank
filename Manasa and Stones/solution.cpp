#include <iostream>
using namespace std;

int main() {
    // Get the number of testcases:
    int T;
    cin >> T;
    
    // Run through the testcases:
    int N, a, b;
    int min, max;
    while (T--) {
        // Get the N, a, and b
        cin >> N >> a >> b;
        if (a > b) {
            min = b;
            max = a;
        } else {
            min = a;
            max = b;
        }
        // Add the values up:
        if (min == max){
            cout << (N-1)*min;
        }else {
            for (int i = 0; i < N; i++){
                cout << i*max + (N-i-1)*min << ' ';
            }
        }
        cout << endl;
    }
    
    return 0;
}