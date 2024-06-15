//diognal sum

#include<bits/stdc++.h>
#
using namespace std;

vector<int>DigonalMatrix(vector<vector<int>>v,int n,int m){

    vector<int>ans;
     
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                ans.push_back(v[i][j]);
            }

            else if(i+j==n-1){
                ans.push_back(v[i][j]);
            }
        }
       
     }
     
     return ans;
        
}


int main(){

    int n=3;
    int m=3;

    vector<vector<int>>v{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
   vector<int>values=  DigonalMatrix(v,3,3);


     for(int i=0; i<values.size();i++){
        cout<<values[i]<<" ";
     }

    return 0;
}