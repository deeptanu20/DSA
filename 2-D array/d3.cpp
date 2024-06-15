#include<bits/stdc++.h>


using namespace std;
vector<int> upperTriangularAndLowerTriangularSum(vector<vector<int>>v,int n){
      vector<int>ans;
      int lower_sum=0;
      int upper_sum=0;

      for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            lower_sum+= v[i][j];
           
        }
      }
  

      for(int i=0; i<n;i++){
        for(int j=n-1;j>=i;j--){
            upper_sum+=v[i][j];
            
        }
      }
    

      ans.push_back(upper_sum);
      ans.push_back(lower_sum);

      return ans;
}

int main(){
    int n= 9;
    vector<vector<int>>v{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
  upperTriangularAndLowerTriangularSum(v,n);



    return 0;
}