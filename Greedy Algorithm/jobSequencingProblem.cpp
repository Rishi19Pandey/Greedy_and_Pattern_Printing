//      jobSequencingProblem.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sortArrays(int jobs[] , int profit [] , int deadline[]  ,int size){
    for(int  i = 0 ; i < size - 1 ; i++){
        for(int j = 0 ; j < size - i- 1 ; j++){
            if(profit[j] < profit[j+1]){
                int temp = profit[j];
                profit[j] = profit[j+1];
                profit[j+1] = temp;

                temp = jobs[j];
                jobs[j] = jobs[j+1];
                jobs[j+1] = temp;

                temp = deadline[j];
                deadline[j] = deadline[j+1];
                deadline[j+1] = temp;
            }
        }
    }
}

int maxProfit(int jobs[] , int profit [] , int deadline[] , int size){
    int maxpro = 0 , count = 0 , i = 0 , j = 0 , maxsize = 0;
    sortArrays(jobs , profit , deadline , size);
    for(i = 0 ; i <size ; i++){
        if(maxsize < deadline[i]){
            maxsize = deadline[i];
        }
    }
    maxsize += 1;
    int sequence[maxsize];
    for(i = 0 ; i < maxsize ; i++){
        sequence[i] = -1;
    }
    cout<<"Sequence => ";
    for(i = 0 ; i < maxsize ; i++){
        cout<<sequence[i]<<" ";
    }
    cout<<endl;
    for(i = 0 ; i < size ; i++){
        for(j = deadline[i] ; j > 0 ; j--){
            if(sequence[j] == -1){
                sequence[j] = jobs[i];
                count++;
                maxpro += profit[i];
                break;
            }
        }
    }
    cout<<"jobs => ";
    for(i = 0 ; i < size ; i++){
        cout<<jobs[i]<<" ";
    }
    cout<<endl;
    cout<<"profit => ";
    for(i = 0 ; i < size ; i++){
        cout<<profit[i]<<" ";
    }
    cout<<endl;
    cout<<"deadline => ";
    for(i = 0 ; i < size ; i++){
        cout<<deadline[i]<<" ";
    }
    cout<<endl;
    cout<<"Sequence => ";
    for(i = 0 ; i < maxsize ; i++){
        cout<<sequence[i]<<" ";
    }
    cout<<endl;
    return maxpro;
}

int main(){
   int size = 8;
//    cout<<"Enter the size => ";
//    cin>>size;
   int jobs[size] = {1,2,3,4,5,6,7,8}; 
   int profit[size] = {20,60,70,65,25,80,10,22};
   int deadline[size] = {4,5,6,6,4,2,2,2};
   cout<<"MAX Profit => "<<maxProfit(jobs , profit , deadline , size)<<endl;
   return 0;
}