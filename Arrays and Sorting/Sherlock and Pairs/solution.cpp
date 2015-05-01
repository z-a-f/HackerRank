#include <iostream>
// #include <pair>
#include <set>
#include <utility>
#include <vector>

using namespace std;

/* Create a set<pair> data structure */
template <typename F, typename S>
struct Pair {
  F first;
  S second;

  Pair(F f, S s) : first(f), second(s) {} 
};

template <class T1, class T2>
bool operator<  (const Pair<T1,T2>& lhs, const Pair<T1,T2>& rhs){ 
  return lhs.first<rhs.first;
}

template <class T1, class T2>
bool operator>  (const Pair<T1,T2>& lhs, const Pair<T1,T2>& rhs){ 
  return lhs.first>rhs.first;
}

template <class T1, class T2>
bool operator<=  (const Pair<T1,T2>& lhs, const Pair<T1,T2>& rhs){ 
  return lhs.first<=rhs.first;
}

template <class T1, class T2>
bool operator>=  (const Pair<T1,T2>& lhs, const Pair<T1,T2>& rhs){ 
  return lhs.first>=rhs.first;
}

template <class T1, class T2>
bool operator==  (const Pair<T1,T2>& lhs, const Pair<T1,T2>& rhs){ 
  return lhs.first==rhs.first;
}

template <class T1, class T2>
ostream& operator << (ostream& os, const Pair<T1, T2>& rhs) {
  os << '<' << rhs.first << ',' << rhs.second << '>';
  return os;
}

typedef set<Pair<int, int> > SP;

int main() {
  size_t T;
  cin >> T;
  int num, N;
  SP pairs;
  set<int> backup;
  while (T--) {
    cin >> N;
    for (int i = 0; i < N; i++) {
      cin >> num;
    }
  }
}
