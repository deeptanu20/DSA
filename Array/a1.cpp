//Best time to sell and buy stock

#include<bits/stdc++.h>
using namespace std;

int BuyandSellStock(int prices[],int n){

    int buy_price=INT_MAX;
    int maxi_profit=0;
    int profit;

    for(int i=0;i<n;i++){
        if(buy_price < prices[i]){
            profit=prices[i]-buy_price;
            maxi_profit=max(maxi_profit,profit);
        }
        else{
                   buy_price = prices[i];
        }

    }

    return maxi_profit;

}

int main(){
   int n=6;
   int prices[]={7,1,5,3,6,4};

 int ans = BuyandSellStock(prices,6);
 cout<<"Maximum profit will be :"<<ans<<endl;
    return 0;
}