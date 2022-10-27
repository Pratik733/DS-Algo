#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{ // 0,1,2,3
    vector<int> arr{3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int a = n - 1;
    // cout<<a;
    while (arr[a] <= arr[a - 1])
    {
        a = a - 1;
    }
    if (a <= 0)
    {
        sort(arr.begin(), arr.end());
        for (int j = 0; j < n; j++)
        {
            cout << arr[j] << " ";
        }
    }

    a = a - 1;
    int closest, minDif = INT_MAX;
    for (int i = a + 1; i < n; i++)
    {
        if (arr[i] > arr[a])
        {
            if (arr[i] - arr[a] < minDif)
            {
                minDif = arr[i] - arr[a];
                closest = i;
            }
        }
    }
    int temp = arr[a];
    arr[a] = arr[closest];
    arr[closest] = temp;

    int start = a + 1, end = n - 1;
    while (start <= end)
    {
        int temp2 = arr[start];
        arr[start] = arr[end];
        arr[end] = temp2;
        start++;
        end--;
    }

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}