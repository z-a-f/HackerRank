#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

bool ascend (int i,int j) { return (i<j); }
bool descend (int i,int j) { return (i>j); }

int main() {
    int T, K, N;
    int num;
    bool no;
    
    // Get the number of testcases:
    cin >> T;
    
    while (T--) {
        no = false;
        // Get the N and K:
        cin >> N >> K;
        vector<int> A, B;
        // Get the first array:
        for (int i = 0; i < N; i++){
            cin >> num;
            A.push_back(num);
        }
        for (int i = 0; i < N; i++){
            cin >> num;
            B.push_back(num);
        }
        // Sort vectors:
        sort(A.begin(),A.end(), ascend);
        sort(B.begin(),B.end(), descend);
        
        // Check the summing:
        for (vector<int>::iterator i = A.begin(), j = B.begin(); i != A.end(); ++i, ++j){
            // cout << "A = " << *i << "; B = " << *j<< endl;
            if ((*i + *j) < K) {
                cout << "NO" << endl;
                no = true;
                break;
            }
        }
        if (!no)
            cout << "YES" << endl;
    }
}