#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int end = n - 1;
    int start = 0;
    while (start < end)
    {

        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        end -= 1;
        start += 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int n;
    cout << "enter length of array";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverseArray(arr, n);

    return 0;
}