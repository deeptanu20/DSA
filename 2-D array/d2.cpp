#include<bits/stdc++.h>

using namespace std;

int snakePrintMatrix(vector<vector<int>>v){
    
    int row = v.size();
    int col = v[0].size();

    for(int i= 0;i<col;i++){
        if( i % 2 == 0){
            for(int j=0 ;j<row; j++){
                cout<< v[i][j]<<" " ;
            }
        }

        else{
            for (int j= col-1;j>=0;j--){
                cout<< v[i][j]<<" " ;
            }
        }
    }
}

int main(){

    vector<vector<int>>v{

        {1,2,3},
        {4,5,6},
        {7,8,9}
   };
     
     snakePrintMatrix(v);

     return 0;
 

}