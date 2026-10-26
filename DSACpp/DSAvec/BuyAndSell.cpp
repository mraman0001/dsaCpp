#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> prices = {7,1,5,3,6,4};
    int n = prices.size();
    int maxProfit = 0, bestBuy = prices[0];

    for(int i = 1; i < n; i++){

        if(prices[i] > bestBuy){
            maxProfit = max(maxProfit,prices[i]-bestBuy);
        }
        bestBuy = min(bestBuy,prices[i]);
    }
    cout<< maxProfit << " ";
    return 0;
}