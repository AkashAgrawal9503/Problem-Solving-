//  #Problem:- subsequence sum 
//  #Tip:- red subsequence sum
//  #Time Complexity:- o(2^n)

/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void subsequenceSum(int ind, int sum,vector<int>&ds, vector<int>& arr,int n){
    if(ind ==n){
        ds.push_back(sum);
        return;
    }
    subsequenceSum(ind+1,sum+arr[ind],ds,arr,n);
    subsequenceSum(ind+1,sum,ds,arr,n);
}

int main() {
    //Start Coding
    vector <int> arr={1,2,5};
    vector<int>ds;
    int n = arr.size();
    subsequenceSum(0,0,ds,arr,n);
    sort(ds.begin(),ds.end());
    for(auto it: ds)cout<<it<<" ";

    return 0;
}