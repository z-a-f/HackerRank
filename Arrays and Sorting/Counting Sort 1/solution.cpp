#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


int main() {
  int N;
  int numS;
  int num[100] = {0};


  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> numS;
    num[numS]++;
  }

  for (int i = 0; i < 100; i++) {
    cout << num[i] << " ";
  }
}