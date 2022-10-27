#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,3,0,4,3};
    int res = INT_MIN;
    int curMax = 1, curMin = 1;
    for(int x:arr){
        int tmp = curMax * x;

        curMax = max(tmp,x*curMin);
        curMax = max(curMax,x);

        curMin = min(tmp,x*curMin);
        curMin = min(curMin,x);

        res = max(res,curMax);
    }
    cout << res;
    return 0;
}