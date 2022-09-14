//  #Problem:- print all subsequence
//  #Tip:- pick non pick
//  #Time Complexity:- o(2^n)

/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void subsequence(int ind, vector <int> ds , int arr[],int n){
    if(ind==n){
        for(auto it: ds)cout<<it<<" ";
        if(ds.size()==0)cout<<"{}";
        cout<<endl;
        return;
    }
    ds.push_back(arr[ind]);
    subsequence(ind+1,ds,arr,n);
    ds.pop_back();

    subsequence(ind+1,ds,arr,n);
}

int main() {
    //Start Coding
    int arr[]={3,2,1};
    vector<int>ds;
    subsequence(0,ds,arr,3);

    return 0;
}