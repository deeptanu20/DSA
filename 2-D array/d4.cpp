//digonal sum 
#include<bits/stdc++.h>

using namespace std;

int digonalSum(int n,vector<vector<int>>v){
    int row =v.size();
    int col = v[0].size();
    int sum_d=0;

    for(int i=0;i<row;i++){
        for(int j=0;j<n;j++){
            if( i == j){
               sum_d+= v[i][j];
            }
        }
    }

    return sum_d;
}



int main(){
    int n=9;
    vector<vector<int>>v {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

  int ans=  digonalSum(n,v);

  cout<<"Ans is :"<<ans<<endl;

    return 0;
}