#include <iostream>

using namespace std;

int main() {
    int N, T;
    
    cin >> T;
    
    int fives, threes;
    
    bool found;
    
    while (T--) {
        cin >> N;
        found = false;
        // Create N-long digit:
        for (threes = 0; threes <= N; threes += 5){
            if ( !((N-threes)%3) ) {
                found = true;
                fives = N - threes;
                break;
            }
        }
        if (!found)
            cout << -1 << endl;
        else {
            for (int i = 0; i < fives; i++)
                cout << "5";
            for (int i = 0; i < threes; i++)
                cout << "3";
            cout << endl;
        }
    }
}