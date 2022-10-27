#include <iostream>
using namespace std;

void insertionSort(int n, int arr[]){
    for(int i=1; i<n; i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j] > current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

        for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main()
{
     int n;

    cout<<"enter size of array";
    cin>>n;

    int arr[n];
    
    cout<<"enter the elements";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    insertionSort(n,arr);

    return 0;

}