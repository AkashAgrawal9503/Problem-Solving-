//  #Problem:- print 1 to n using recursion
//  #Tip:- use recursion
//  #Time Complexity:- o(N)

/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void print(int i,int n){
    if(i<1)return;
    cout<<i<<" ";
    return print(i-1,n);
}

int main() {
    int n;
    cin>>n;
    print(n,n);
    return 0;
}