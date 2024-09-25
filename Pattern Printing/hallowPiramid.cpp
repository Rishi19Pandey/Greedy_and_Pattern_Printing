//                      hallowPiramid.cpp

#include<bits/stdc++.h>
using namespace std;

int main(){
   int row, col, i , j;
   cout<<"Enter Row : ";
   cin>>row;
   col = 2*row - 1;
   for(i = 0 ; i < row; i++){
    for(j = 0; j < col; j++){
        if((i == row-1) || (j == (row-1)-i) || (j == (row-1)+i)){
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
Enter Row : 10
         *
        * *
       *   *
      *     *
     *       *
    *         *
   *           *
  *             *
 *               *
*******************
*/