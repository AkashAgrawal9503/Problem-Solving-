//  #Problem:- print only one subsequence sum
//  #Tip:- use in basecase if (true )return true or false  
//  #Time Complexity:- o(2^N)

/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool subsequence(int ind, vector <int>& ds,int sum,int k , int arr[],int n){
    if(ind==n){
        if(sum==k){
            for(auto it: ds)cout<<it<<" ";
            return true;
        }
        return false;
    }
    ds.push_back(arr[ind]);
    sum += arr[ind];
    if(subsequence(ind+1,ds, sum, k, arr,n)==true) return true;
    sum-= arr[ind];
    ds.pop_back();

    if(subsequence(ind+1,ds,sum, k, arr,n)==true) return true;

    return false;
}

int main() {
    //Start Coding
    int arr[]={3,2,5};
    int n = 3;
    int k = 5;
    vector<int>ds;
    subsequence(0, ds, 0, k, arr ,n);

    return 0;
}