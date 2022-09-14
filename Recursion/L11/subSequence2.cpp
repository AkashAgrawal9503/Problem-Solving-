//  #Problem:- subsequence Sum 2
//  #Tip:- No tips
//  #Time Complexity:- o(2^n * k)

/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void subSequenceWithdup(int ind , vector<int>& ds,vector<vector<int>>& ans, vector <int>arr ){
    ans.push_back(ds);
    for (int i = ind; i < arr.size(); i++)
    {
        /* code */
        ds.push_back(arr[i]);
        subSequenceWithdup(i+1,ds,ans,arr);
        ds.pop_back();
    }
    
}

int main() {
    //Start Coding
    vector<int> arr = {1,2,2};
    vector<int> ds;
    vector<vector<int>> ans;
    subSequenceWithdup(0,ds,ans,arr);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int J = 0; J < ans[i].size(); J++)
        {
            cout<< ans[i][J]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}