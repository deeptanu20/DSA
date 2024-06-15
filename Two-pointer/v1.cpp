#include<bits/stdc++.h>
using namespace std;

void maxmSubarraySum(int arr[],int k, int n, int x){
         int sum=0 ,ans=0;
         
         for(int i=0;i<k;i++){
               sum +=arr[i];
               
         }
         if(sum < x) {
            ans=sum;
         }

         for(int i=k;i<n;i++){
            sum=sum - arr[i-k];
            sum=sum + arr[i];
         

         if( sum < x && sum >ans){
            ans=max(ans,sum);
         }
         }

         cout<< ans << " is the maximum subarray "<<endl;

}




int main(){

  int arr[]={7,5,4,6,8,9};
  int k=3;
  int n=6;
  int x=20;
  maxmSubarraySum( arr,k,n,x);
    return 0;
}