#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int packets[] = {12, 4,  7,  9,  2,  23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50}, m;
    cout<<"enter no of students:- ";
    cin>>m;
    
    int n = sizeof(packets) / sizeof(packets[0]);

    if (m == 0 || n == 0)
    {
        cout<<"invalid array or no.of students";
        return 0;
    }
    
    sort(packets, packets + n); //{2, 4, 7, 9, 12, 23, 25, 28, 30, 30, 40, 41, 42, 43, 44, 48, 50}
    int minDif = INT_MAX, currdif = 0, packGrp[m];
    for (int i = 0; i+m-1 < n; i++)
    {
        currdif = packets[i+m-1] - packets[i];
        if (currdif < minDif)
        {
            minDif = currdif;
            for (int j = 0; j < m; j++)
            {
                packGrp[j] = packets[i+j];    
            }
        }
        
    }
    
    cout<<"Minimum Difference is "<<minDif<<endl;
    cout<<"Group of Packets are:- ";
    for (int x:packGrp)
    {
        cout<<x<<" ";
    }
    

    return 0;
}