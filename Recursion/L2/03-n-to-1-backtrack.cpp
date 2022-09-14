//  #Problem:- print n to 1 using backtracking 
//  #Tip:- use backtracking 
//  #Time Complexity:- o(N)

/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void print(int i , int n ){
    if(i>n)return;
    print(i+1,n);
    cout<<i<<endl;
}

int main() {
    int n ;
    cin>>n;
    print(1,n);
    return 0;
}