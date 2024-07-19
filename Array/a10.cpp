//container with most water (Two pointer approach)

#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>&heights){
    int max_area=0;
    int n = heights.size()-1;
    int i=0;
    while(i<n){
        int width=(n-i);
        int area= width * min(heights[i],heights[n]);
        max_area=max(max_area,area);

        if(heights[i] < heights[n]){
            i++;
        }
        else{
            n--;
        }

    }

    return max_area;
}

int main(){
    vector<int>heights={1,8,6,2,5,4,8,3,7};
    cout<<"Maximum area is: "<<maxArea(heights)<<" ";

    return 0;
}