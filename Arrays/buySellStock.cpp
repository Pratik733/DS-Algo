#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int prices[] = {7,1,5,3,6,4};
    int n = sizeof(prices)/sizeof(prices[0]);
    int maxProfit = 0, minSoFar = prices[0], profit;
    for (int i = 0; i < n; i++)
    {
        minSoFar = min(minSoFar, prices[i]);
        profit = prices[i] - minSoFar;
        maxProfit = max(profit,maxProfit);
    }
    
    cout<<maxProfit;
    return 0;
}