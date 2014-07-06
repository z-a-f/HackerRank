#include <iostream>
#include <cmath>
using namespace std;

int height(int n) {
  int a = pow(2,ceil(n/2.0));
  int c = pow(2,ceil(n/2.0)) - 1 - n%2;
  return a + c;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    cout << height(n) << endl;
  }
}
