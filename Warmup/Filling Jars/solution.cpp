#include <iostream>

using namespace std;

int main() {
    long N,M;
    long start, end, amount;
    long total = 0;
    
    cin >> N >> M;
    while (M--) {
        cin >> start >> end >> amount;
        total += (end - start + 1) * amount;
    }
    cout << total / N;
    /*
    int jars[N] = {0};
    
    while (M--) {
        cin >> start >> end >> amount;
        for (int i = start; i <= end; i++){
            jars[i] += amount;
        }
    }
    */
}