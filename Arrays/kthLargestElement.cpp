#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    int arr[] = {3,2,3,1,2,4,5,5,6}, k;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter K:- ";
    cin>>k;
    for (int i = 0; i < k; i++)
    {
        pq.push(-arr[i]);
    }
    for (int i = k; i < n; i++)
    {
        if (pq.top() > -arr[i])
        {
            pq.pop();
            pq.push(-arr[i]);
        }
    }
    cout<<"The "<<k<<"th Largest Number is:- "<<-pq.top();
    return 0;
    
}