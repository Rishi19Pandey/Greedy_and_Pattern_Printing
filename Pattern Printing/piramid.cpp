//              piramid.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
   int row , col;
   cout<<"Enter number of rows => ";
   cin>>row;
   col = (row*2)-1;
   for(int i = 1 ; i <= row ; i++){
        for(int j = 1 ; j <= col ; j++){
            if(j>=row-(i-1) && j<=row+(i-1)){
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

Enter number of rows => 9
        *
       ***
      *****
     *******
    *********
   ***********
  *************
 ***************
*****************
*/