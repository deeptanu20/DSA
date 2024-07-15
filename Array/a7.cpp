#include<bits/stdc++.h>
using namespace std;

bool adjevent3odd(int arr[],int n){
    int i=0;
    int j=0;
    while(i<n && j<n){
        if(arr[j]%2==0){
           j=j+1;
           i=j;
        }else{
            j++;
        }

        if(j-i==3){
            return true;
        }
    }
    return false;
}


int main(){
    int arr[]={1,2,4,3,11,7,8,10};
    int n=8;
    cout<<adjevent3odd(arr,n);

return 0;
}