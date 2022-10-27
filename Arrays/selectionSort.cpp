#include<iostream>
using namespace std;


void selectSort(int n,int arr[]){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
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

    selectSort(n,arr);
    



    return 0;
}


