//  #Problem:- print name N times
//  #Tip:- No tips
//  #Time Complexity:- o(N)

/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/***** MY Code ***********/

// int print(int n){
//     if(n == 0)return -1;
//     cout<<"Name"<<endl;
//     return print(n-1);
// }


/****** striver's Code *********/
void print(int i,int n ){
    if(i>n)return;
    cout<<"Akash"<<endl;
    return print(i+1,n);

}

int main() {
    //Start Coding
    int n ;
    cin>>n;
    print(1,n);
    return 0;
}