//  #Problem:- combination sum is k , each element can be use multipal times
//  #Tip:- No tips
//  #Time Complexity:- o(2^n)

/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void combination(int ind, vector <vector<int>>& ans,vector<int> ds, int target , int arr[], int n){
    if(ind == n && target <=0){
        if(target==0){
            ans.push_back(ds);
        }
        // for(auto it:ds)cout<<it<<" ";
        // cout<<endl;
        // cout<<target;
        return;
    }
    if(target>=arr[ind]){
        ds.push_back(arr[ind]);
        combination(ind,ans,ds,target-arr[ind],arr,n);
    }
    // if(target>0){
        ds.pop_back();
        // ds.push_back(arr[ind+1]);
        combination(ind+1,ans,ds,target,arr,n);

    // }
}

int main() {
    //Start Coding
    int arr[]={2,3,6,7};
    vector<vector<int>> ans;
    vector<int>ds;
    combination(0,ans,ds,7,arr,4);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}