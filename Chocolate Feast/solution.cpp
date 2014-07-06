#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long t,n,c,m;
    long chocs, extra, wraps;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        long answer=0;
        // Computer answer
        chocs = floor(1.0*n/c);
        wraps = chocs;
        extra = floor(1.0*wraps/m);
        wraps += floor((1.0*chocs+extra)/m);
        extra = floor(1.0*wraps/m);
        wraps = chocs + floor((1.0*chocs+extra)/m);
        extra = floor(1.0*wraps/m);
        answer = extra + chocs;
        cout<<answer<<endl;
    }
    return 0;
}