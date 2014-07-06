#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // Get the number of testcases:
  int T;
  cin >> T;
    
  // Get the testcases:
  long K;
  long temp;
  while(T--) {
    cin >> K;
    temp = ceil(K/2.0);
    cout << (K - temp)*temp << endl;
  }
    
    
}
