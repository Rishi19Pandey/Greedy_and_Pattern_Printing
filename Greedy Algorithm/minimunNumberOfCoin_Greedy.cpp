//      minimunNumberOfCoin_Greedy.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minimunNumberOfCoin_Greedy(vector<int> coins , int rs){
    int maxCoin = 0  , i = 0 , j = -1;
    for(i = 0 ; i < coins.size() ; i++){
        if(coins[i] < rs){
            j++;
        }
        else if(coins[i] == rs){
            return 1;
        }
    }
    int rem = 0;
    while(j>= 0 && rs != 0){
        rem = rs - coins[j];
        if(rem >= 0){
            maxCoin++;
            rs = rs - coins[j];
        }
        while(rs < coins[j]){
            j--;
        }
    }
    return maxCoin;
}

int optimal(vector<int> coins , int rs){
    int max = 0 , i = 0 , size = 0;
    vector<int> ans;
    size  = coins.size();
    for(i = size - 1 ; i >= 0 ; i--){
        while(rs >= coins[i]){
            ans.push_back(coins[i]);
            rs -= coins[i];
            max++;
        }
    }
    for(auto itr : ans){
        cout<<itr<<" ";
    }
    cout<<endl;
    return max;
}


int main(){
   vector<int> coins = {1,2,5,10,20,50,100,500,1000};//1,2,5,10,20,50,100,500,1000
   int rs = 0 ;
   cout<<"Enter Ammount => ";
   cin>>rs;
   cout<<"Minimun Coin Required => "<<minimunNumberOfCoin_Greedy(coins , rs)<<endl;
   cout<<"Minimun Coin Required => "<<optimal(coins , rs)<<endl;
   return 0;
}