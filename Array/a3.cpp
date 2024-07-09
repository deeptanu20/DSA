//pascal triangle
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>pascalTriangle(int numRows){
    vector<vector<int>>ans;
    for(int i=0;i<numRows;i++){
        vector<int>rows(i+1,1);
        for(int j=1;j<i;j++){
            rows[j]=ans[i-1][j] + ans[i-1][j-1];
        }
        ans.push_back(rows);
    }
    
    return ans;
}
int main(){
    int numRows=5;
    vector<vector<int>>v=pascalTriangle(numRows);

    for(int i=0;i<v.size();i++){     // print vector of vector
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
            
        }
        cout<<endl;
    }

    return 0;
}