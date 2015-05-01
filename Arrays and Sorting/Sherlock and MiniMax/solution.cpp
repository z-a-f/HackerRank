// #include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <iostream>

using namespace std;

int n;
int arr[109];
int A, B;
int answer;

//returns the value to be maximised if M=x
int check( int x )
{
    int ret = INT_MAX;
    for( int i = 0; i < n; ++i ) 
        ret =min(ret, abs( x- arr[i] ));
    return ret;
}

// check is x is within limits and if check(x) is better store the answer
void limits( int x )
{
    if( x < A || x > B ) return;
    if(check(x) > check(answer)) answer = x;   
}

int main()
{
    cin >> n;
    for( int i = 0; i < n; ++i ) 
        cin >> arr[i];

    cin >> A >> B;

    answer = A;

    // check for A and B
    limits( A ); 
    limits( B ); 

    for( int i = 0; i < n; ++i ) 
        for( int j = i+1; j < n; ++j ) 
    {
        // check for (A_i + A_j)/2
        limits( (arr[i]+arr[j])/2 );
    }

    cout << answer;

    return 0;
}