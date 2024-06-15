#include<bits/stdc++.h>
using namespace std;

int main(){

   vector<vector<int>> Grid;    
   int n=2;
   int m= 3;

  int Grid[n][m]={1,3,5,-7,2,-4};

  int sum=0;

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        sum+=Grid[n][m];
    }
  }

  cout<<"Total Sum of the matrix is :"<<sum<<endl;




}
