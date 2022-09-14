//  #Problem:- febonachi series 
//  #Tip:- multipal recursion call 
//  #Time Complexity:- o(N)

/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int feb(int n){
    if(n<=1)return n;
    return feb(n-1)+feb(n-2);
}

int main() {
    cout<<feb(5);
    return 0;
}