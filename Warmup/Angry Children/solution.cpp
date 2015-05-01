#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* The code required to enter n,k, candies is provided*/

    int N, K, unfairness;
    cin >> N >> K;
    int candies[N];
    for (int i=0; i<N; i++){
        cin >> candies[i];
    }
    
    // Create a vector:
    vector<int> array (candies, candies+N);
    
    // Sort the vector:
    sort(array.begin(), array.end());
    
    // Calculate the maxmin:
    int maxmin;
    unfairness = pow(10,9); // set to the maximum
    for (vector<int>::iterator it = array.begin(); it != array.end()-K; ++it) {
        maxmin = *(it+K-1) - *(it);
        if (maxmin < unfairness)
            unfairness = maxmin;
    }
    
    
    cout << unfairness << "\n";
    return 0;
}