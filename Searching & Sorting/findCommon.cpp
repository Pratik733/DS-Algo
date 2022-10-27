#include <bits/stdc++.h>
using namespace std;

bool binary_search(int arr[], int n, int element)
{
    int l = 0, h = n - 1;
    while (l <= h) {
        int mid = (l + h) / 2;
        if (arr[mid] == element) {
            return true;
        }
        else if (arr[mid] > element) {
            h = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return false;
}

void findCommon(int ar1[], int ar2[], int ar3[], int n1,
                int n2, int n3)
{  
        for (int i = 0; i < n1; i++)
        {
            if (binary_search(ar2,n2,ar1[i]) == true)
            {
                if (binary_search(ar3,n3,ar1[i]) == true)
                {
                    cout << ar1[i] <<" ";
                }
                
            }
            
        }
    
}



int main(){
    int ar1[] = { 1, 5, 10, 20, 40, 80 };
    int ar2[] = { 6, 7, 20, 80, 100 };
    int ar3[] = { 3, 4, 15, 20, 30, 70, 80, 120 };
    int n1 = sizeof(ar1) / sizeof(ar1[0]);
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    int n3 = sizeof(ar3) / sizeof(ar3[0]);

    findCommon(ar1, ar2, ar3, n1, n2, n3);
    return 0;
}