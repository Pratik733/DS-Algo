#include <iostream>
using namespace std;

int modifiedBinarySearch(int nums[], int n)
{
    int mid, ans = INT_MAX;
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        if (nums[start] < nums[end])
        {
            ans = min(ans, nums[start]);
            break;
        }
        mid = (start + end) / 2;
        ans = min(ans, nums[mid]);
        if (nums[mid] >= nums[start])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {13, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = modifiedBinarySearch(arr, n);
    cout << ans;
    return 0;
}