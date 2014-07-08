#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<unsigned short> ar, int len) {
    for (int i = 0; i < len; i++) {
        cout << ar[i] << ' ';
    }
}

bool process() {
    // Get the length of the array:
    int N;
    cin >> N;
    
    // Get the array:
    unsigned short num;
    vector<unsigned short> ar;
    for (int i = 0; i < N; i++) {
        cin >> num;
        ar.push_back(num);
    }
    
    // Get the sums to the left and to the right:
    int lPointer = 0, rPointer = N-1;
    unsigned long long lSum = ar[0], rSum = ar[N-1];
    while (rPointer > lPointer + 2) {
        if (lSum < rSum) {
            lPointer++;
            lSum += ar[lPointer];
        } else {
            rPointer--;
            rSum += ar[rPointer];
        }
    }
    
    if (lSum == rSum) return true;
    else return false;
    
}

int main() {
    // Get the number of testcases:
    int T;
    cin >> T;
    
    // Get the testcases:
    for (int test = 0; test < T; test++) {
        if(process())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    
}