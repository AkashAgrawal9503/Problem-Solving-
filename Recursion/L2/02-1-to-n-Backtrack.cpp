//  #Problem:- print 1 to n using backtracking
//  #Tip:- use backtraking
//  #Time Complexity:- o(N)

/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void print(int i, int n){
    if(i<1)return;
    print(i-1,n);
    cout<<i<<endl;
}

int main() {
    int n ;
    cin>>n;
    print(n,n);
    return 0;
}