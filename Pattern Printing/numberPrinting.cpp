//                                numberPrinting.cpp

#include<bits/stdc++.h>
using namespace std;

int main(){
   int row,i,j,count = 1;
   cout<<"Enter row : ";
   cin>>row;
   for(i = 0 ; i < row; i++){
    for(j = 0; j <= i; j++){
        cout<<" "<<count++<<" ";
    }
    cout<<endl;
   }
   return 0;
}


/*

Enter row : 6
 1
 2  3
 4  5  6
 7  8  9  10
 11  12  13  14  15
 16  17  18  19  20  21
 
*/