#include <iostream>
using namespace std;


int main()
{
    int n;
    cout<<"enter length of array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxSub = arr[0];
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (currSum < 0)
        {
            currSum = 0;
        }
        currSum += arr[i];
        if (currSum > maxSub){
            maxSub = currSum;
        }
    }
    
    cout<<maxSub;
    return 0;
}