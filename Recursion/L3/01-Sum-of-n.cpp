//  #Problem:- sum of first n natural numbers
//  #Tip:- using Recursion
//  #Time Complexity:- o(N)

/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/***** my parameterized answer****/
// int sumOfNNumber(int i,int n, int sum){
//     if(i>n)return sum;
//     sum +=i;
//     return sumOfNNumber(i+1,n,sum);
// }


/*********striver's parameterized answer**********/
void sumOfNum(int i, int sum){
    if(i<0){
        cout<<sum;
        return;
    }
    return sumOfNum(i-1,sum+i);
}


/*********striver's functional answer**********/

// here we return something
int sumOfNumFunction(int i){
    if(i<1)return 0;
    
    return i+sumOfNumFunction(i-1);
}

int main() {
    // sumOfNum(3,0);
    cout<<sumOfNumFunction(4);
    return 0;
}