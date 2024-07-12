// Maximum area of island
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:

    int algo(int i,int j,vector<vector<int>>&grid,int n,int m){

         if(i<0 ||i>=n || j<0 || j>=m ||grid[i][j]==0 || grid[i][j]==-1){   // base condition
            return 0;
         }
        grid[i][j]=-1; //marking 
        int ansUp=algo(i-1,j,grid,n,m);
        int ansDown=algo(i+1,j,grid,n,m);
        int ansLeft=algo(i,j-1,grid,n,m);
        int ansRight=algo(i,j+1,grid,n,m);

        return ansUp + ansDown + ansLeft + ansRight + 1 ;




    }
    
    int maxAreaOfIsland(vector<vector<int>>&grid){
        int n=grid.size();
        int m=grid[0].size();
        int maxArea=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1){
                    int area= algo(i,j,grid,n,m);
                    maxArea=(area,maxArea);
                }
            }
        }
        return maxArea;

    }

};

int main(){
        vector<vector<int>>grid={{0,0,0,0,0,0,0,0}};
        int n=grid.size();
        int m=grid[0].size();
        Solution s;
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            s.algo(i,j,grid,n,m);       
        }
    }
    cout<<s.maxAreaOfIsland(grid);
    
    return 0;

}