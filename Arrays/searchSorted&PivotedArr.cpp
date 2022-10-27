#include <iostream>
using namespace std;

int modifiedBinarySearch(int arr[], int start, int end, int key)
{
    while (start <= end)
    {
        int mid = (start + end)/2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[start] <= arr[mid])
        {
            if (arr[start]<=key && key<arr[mid])
            {
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            
        }
        else{
            if (arr[mid]<key && key<=arr[end])
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }    
        }
    }
    return -1;

}

int main(){
    int arr[] = { 5, 6, 7, 8, 9, 10, 1, 2, 3 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 9;

    cout << "Index of the element is : "
         << modifiedBinarySearch(arr, 0, n-1, key);
 
    return 0;
}