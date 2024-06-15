#include<bits/stdc++.h>
using namespace std;

int isPossible(int arr[],int n,int k){
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
   

    for(int j=k;j<n;j++){

         if(sum % 3 ==0){
        return 1;
    }

        sum=sum+arr[j]+arr[j-k];

    }
    if(sum %3 ==0){
        return 1;
    }
     else{
        return 0;
     }

}

int main(){
    int arr[]={8,23,45,12,56,4};
    int n=6;
    int k=3;
   int ans= isPossible(arr,n,k);

   cout<<ans<<endl;

   

    return 0;
}