//  #Problem:- check if string is palandrom or not
//  #Tip:- No tips
//  #Time Complexity:- o(N)



/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool palendrom(string str,int i){
    if(i>=str.size()/2)return true;
    if(str[i]!=str[str.size()-i-1])return false;
    return palendrom(str,i+1);
}

int main() {
  
    cout<<palendrom("madsm",0);
    return 0;
}