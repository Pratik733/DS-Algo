#include <stdio.h>
#include <iostream>

using namespace std;

void pairSum(int arr[], int n, int k){
    int low = 0;
    int high = n-1;

    while (low < high)
    {
        if(arr[low] + arr[high] == k){
            cout<<low<<" "<<high<<endl;
            break;
        }

        else if(arr[low] +arr[high] > k){
            high--;
        }

        else {
            low++;
        }
    }
    
}

int main(){
    int n;
    cout<<"enter length of array";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"Enter K ";
    cin>>k;

    pairSum(arr, n, k);

    return 0;

}