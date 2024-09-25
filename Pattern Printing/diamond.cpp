//          diamond.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
   int row , col , i , j ;
   cout<<"Enter Row => ";
   cin>>row;
   col = (row/2)+1;
   for(i = 1 ; i <= col ; i++){
        for(j = 1 ; j <= (col*2)-1 ; j++){
            if(j>= col-(i-1) && j<= col+(i-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
   }
   int rem = row - col;
   for(i = rem ; i>= 1 ; i--){
        for(j = 1 ; j<= row ;j++){
            if(j>= col-(i-1) && j<= col+(i-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
   }
   return 0;
}


/*
Enter Row => 9
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/