#include <iostream>
#include <string>
using namespace std;

int countGems(string str) {
  return (int)str.length();
}

int main() {
  int T;
  int phash[26];
  int count = 0;
  // Initialize hash:
  for (int i = 0; i < 26; i++){
    phash[i] = 0;
  }

  cin >> T;
  for (int i = 1; i <= T; i++) {
    string str;
    cin >> str;
    // Iterate through string:
    for (int j = 0, len = str.length(); j < len; j++) {
      phash[str[j]-'a'] = (phash[str[j]-'a'] == i - 1 || phash[str[j]-'a'] == i)? i : 0;
      // cout << str[j] << "; " << phash[str[j]-'a'] << endl;
    }
  }
  for (int i = 0; i < 26; i++) {
    if (phash[i] == T)
      count++;
  }
  cout << count << endl;
}
