#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    long long n, k; cin >> n >> k;
    vector<int> prices;
    for(int i = 0; i < n; i++)
    {
        int p; cin >> p;
        prices.push_back(p);
    }
    sort(prices.begin(), prices.end());
    
    int answer = 0;
    int sum = 0;
    // Write the code for computing the final answer using n,k,prices
    while (sum <= k) {
        answer++;
        sum += prices[answer-1];
    }
    while (sum > k){
        answer--;
        sum -= prices[answer];
    }
    cout << answer << endl;
    
    return 0;
}
