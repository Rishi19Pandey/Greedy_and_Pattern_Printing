//          pattern.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
   int row;
   cout<<"Enter => ";
   cin>>row;
   //               Series
   for(int i = 1 ; i <= row ; i++){
    int x =1;
        for(int j = 1 ; j <= i ; j++){
            cout<<x;
            x += 1;
        }
        cout<<endl;
   }
//              Reverse 

   
   for(int i = row ; i >= 1 ; i--){
        int y = 1;
        for(int j = 1 ; j <= i ; j++){
            cout<<y;
            y += 1;
        }
        cout<<endl;
   }
   return 0;
}


/*
Enter => 9
1
12
123
1234
12345
123456
1234567
12345678
123456789
123456789
12345678
1234567
123456
12345
1234
123
12
1
*/