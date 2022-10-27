#include <bits/stdc++.h>
using namespace std;

int findMaxSum(int* arr, int n)
{
    vector<int> a;
    vector<int> b;
     
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            a.push_back(arr[i]);
        }
        else if (arr[i] < 0) {
            b.push_back(arr[i]);
        }
    }
     
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
     
    int p = a.size() - 1;
    int q = b.size() - 1;
    int s = 0;
     
    while (p >= 0 && q >= 0) {
        if (a[p] + b[q] > 0) {
            s = s + a[p] + b[q];
        }
        else {
            break;
        }
        p = p - 1;
        q = q - 1;
    }
    return s;
}
 
int main()
{
    int arr1[] = { 1, -2, 3, 4, -5, 8 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
 
    cout << findMaxSum(arr1, n1) << endl;
    return 0;
}