#include <iostream>
#include <cmath>

using namespace std;

int palindromeSteps(string str, int len) {
  if (len == 1)
    return 0;
    
  string part;
  if (len % 2) { // if the length is odd
    part = str.substr(ceil(len/2)+1);
  } else { // if the length is even
    part = str.substr(len/2);
  }
    
  // Reset the string:
  int steps = 0;
  int lenPart = part.length();
  int dummy;
  for (int i = lenPart - 1; i >= 0; i--) {
    /*
        if (part[i] >= str[lenPart-1-i]) {
            dummy = int(part[i] - str[lenPart-1-i]);
        } else {
            dummy = int(part[i] - 'a');
        }
    */
    steps += abs(int(part[i] - str[lenPart-1-i])); // dummy;
    // cout << part[i] << ' ' << str[lenPart-1-i] << ' ' << int(part[i] - str[lenPart-1-i]) << endl;
  }    
  return steps;
}

int main() {
  // Get the number of testcases:
  int T;
  cin >> T;
    
  string str;
  string orig;
    
  int length;
  int dummy;
    
  while (T--) {
    // Get the string:
    cin >> str;
    length = str.length();
    cout << palindromeSteps(str, length) << endl;
    // dummy = palindromeSteps(str, length);
  }
    
}
