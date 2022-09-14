//  #Problem:- combination 2
//  #Tip:- No tips
//  #Time Complexity:- o(2^n * k)

/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


    void findCombination(int ind,int target, vector<int>& ds,vector<vector<int>>& ans, vector<int>arr,int n){
        // if(ind==n){
            if(target == 0){
                ans.push_back(ds);
            }
        // }
        for(int i =ind;i<n;i++){
            if(i>ind && arr[i]==arr[i-1])continue;
            if(arr[i]>target)break;
            ds.push_back(arr[i]);
            findCombination(i+1,target-arr[i],ds,ans,arr,n);
            ds.pop_back();
            
        }
    }

int main() {
        vector<int> candidates={1,1,1,2,2};
        int target =4;
        sort(candidates.begin(),candidates.end());
        int n = candidates.size();
        vector<vector<int>> ans;
        vector <int> ds;
        findCombination(0,target,ds,ans,candidates,5);
        // cout<<ans.size()<<" "<<ans[0].size();
        for (int  i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        
        // for(auto it: ans)
    return 0;
}