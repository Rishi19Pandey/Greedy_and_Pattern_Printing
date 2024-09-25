//             n_MeetingInOneRoom.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void SortArray(int A[] , int B[] ,int C[], int size){
    int i = 0 , j = 0;
    for(i = 0; i< size-1 ; i++){
        for(j = 0 ; j < size - i - 1 ; j++){
            if(B[j] > B[j+1]){
                int temp = B[j];
                B[j] = B[j+1];
                B[j+1] = temp;

                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;

                temp = C[j];
                C[j] = C[j+1];
                C[j+1] = temp;
            }
        }
    }
}

int n_Meeting(int A[] , int B[] , int size){
   int C[size];
   for(int i = 0 ; i < 6 ; i++){
        C[i] = i + 1;
    }
    SortArray(A,B,C,size);
    int maxtime = B[0];
    vector<int> vec;
    vec.push_back(C[0]);
    for(int i = 1 ; i < size ; i++){
        if(maxtime <= A[i]){
            vec.push_back(C[i]);
            maxtime = B[i];
        }
    }
    for(auto itr : vec){
        cout<<itr<<" ";
    }
    cout<<endl;
    return vec.size();
}

int main(){
   int A[6]={4,6,5,0,7,9};
   int B[6]={5,7,8,3,8,12};
   cout<<"Ans => "<<n_Meeting(A,B,6)<<endl;
   return 0;
}