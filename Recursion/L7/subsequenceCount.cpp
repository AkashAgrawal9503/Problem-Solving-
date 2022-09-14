//  #Problem:- count subsequence whole sum is k
//  #Tip:- use multipal recursion and left and right sum technique
//  #Time Complexity:- o(2^n)

/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int countSubsequence(int i, int cnt, int sum,int arr[],int n , int k){
    if(i==n){
        if(sum == k)return 1;
        else return 0;
    }
    sum+=arr[i];
    int l = countSubsequence(i+1,cnt,sum,arr,n,k);
    sum-=arr[i];
    int r = countSubsequence(i+1,cnt,sum,arr,n,k);
    return l+r;
}

int main() {
    //Start Coding
    int arr[]={1,2,1};
    cout<<countSubsequence(0,0,0,arr,4,2);
    return 0;
}