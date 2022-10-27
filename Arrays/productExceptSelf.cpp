#include <iostream>
using namespace std;

int main(){
    int nums[] = {1,2,3,4};
    int n = sizeof(nums)/sizeof(nums[0]);
    int ans[n], leftProd = 1;
    for (int i = 0; i < n; i++)
    {
        leftProd *= nums[i];
        ans[i] = leftProd;
    }
    int rightProd = 1;
    for (int i = n-1; i > 0; i--)
    {
        ans[i] = ans[i-1]*rightProd; 
        rightProd *= nums[i];
    }
    ans[0] = rightProd;
    
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
    
}