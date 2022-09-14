//  #Problem:- subsequence sum is k
//  #Tip:- IMP PRoblem cuase this technique is use in DP a LOt
//  #Time Complexity:- o(2^n)

/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void SumIsK(int ind, int sum,vector<int> &ds, int arr[],int n,int k ){
    if(ind==n){
        // cout<<sum;
        // cout<<endl;
        if(sum==k){
            for(auto it: ds)cout<<it<<" ";
            cout<< endl;
        }
        // for(auto it: ds)cout<<it<<" ";
        // cout<<endl;
        return;

    }
    ds.push_back(arr[ind]);
    SumIsK(ind+1,sum+arr[ind],ds,arr,n,k);
    ds.pop_back();
    // sum-=arr[ind];
    SumIsK(ind+1,sum,ds,arr,n,k);


}

int main() {
    //Start Coding
    int arr[]={1,2,1,1};
    vector<int> ds;
    SumIsK(0,0,ds,arr,4,2);
    return 0;
}


