//  #Problem:- factorial of n numbers using recursion
//  #Tip:- do functional programing not parameterized (function means return something)
//  #Time Complexity:- o(N)

/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int fact(int n){
    if(n==1)return 1;
    return n* fact(n-1);
}

int main() {
    cout<<fact(3);
    return 0;
}