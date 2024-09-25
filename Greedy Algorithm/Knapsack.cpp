//      Knapsack.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void val_wt_sort(int val[] , int wt[]  ,int size){
    for(int i = 0 ; i < size-1 ; i++){
        for(int j = 0 ; j< size - i - 1 ; j++){
            if((double)val[j]/(double)wt[j] < (double)val[j+1]/(double)wt[j+1]){
                int temp = val[j];
                val[j] =  val[j+1];
                val[j+1] = temp;

                temp = wt[j];
                wt[j] = wt[j+1];
                wt[j+1] = temp;
            }
        }
    }
}

double maxProfit(int val[] , int wt[] , int size , int W){
    double profit = 0.0;
    vector<int> vec;
    val_wt_sort(val,wt,size);
    for(int i = 0 ; i < size ; i++){
        if(wt[i] < W){
            profit += val[i];
            W -= wt[i];
            vec.push_back(wt[i]);
        }
        else{
            double rem = (double)val[i] / (double)wt[i];
            profit += rem*W;
            vec.push_back(W);
            break;
        }
    }
    for(auto itr : vec){
        cout<<itr<<"kg "<<"  ";
    }
    cout<<endl;
    return profit;
}

int main(){
    int size = 1 , maxweight = 10;
   int val[size] = {500};
    int wt[size] = {30};
    cout<<"Maximum Profit is => "<<maxProfit(val,wt,size,maxweight)<<endl;
   return 0;
}