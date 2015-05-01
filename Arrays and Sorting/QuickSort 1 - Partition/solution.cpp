#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void partition(vector <int>  ar, int ar_size) {
    int pivot = ar[0];
    // int pointer = 1;
    int moveTo = 0;
    
    for (int i = 1, j; i < ar_size; i++) {
        if (pivot > ar[i]) {
            int temp = ar[i];
            j = i;
            while (j != moveTo) {
                ar[j] = ar[j-1];
                j--;
            }
            ar[moveTo] = temp;
            moveTo++;
        }
    }
    
    for (int i = 0; i < ar_size; i++) {
        cout << ar[i] << ' ';
    }
    cout << endl;

}
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    partition(_ar, _ar_size);

    return 0;
}
