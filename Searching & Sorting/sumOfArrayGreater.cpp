#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool greaterOrEqual(int a[], int b[], int n, int k){
    sort(a, a+n);
    sort(b, b+n, greater<int>());

    for (int i = 0; i < n; i++)
    {
        if (a[i] + b[i] < k)
        {
            return false;
        }
        
    }

    return true;
}

int main(){
    int a[] = {2, 1, 3};
    int b[] = { 7, 8, 9 };
    int k = 10;
    int n = sizeof(a)/sizeof(a[0]);

    cout<<greaterOrEqual(a,b,n,k);

    return 0;
    
}