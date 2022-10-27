#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter length of array : ";
    cin>>n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int len = sqrtl(n);
    vector<int> b(len);

    for (int i = 0; i < n; i++)
    {
        b[i/len] += a[i];
    }

    int q;
    cout << "Enter no.of queries : ";
    cin >> q;
    while (q--)
    {
        int l,r;
        cout<<"From : ";
        cin>>l;
        cout<<"To : ";
        cin>>r;
        int sum = 0;
        for (int i = l; i <= r ;)
        {
            if(i%len == 0 && i+len <= r){
                sum += b[i/len];
                i += len;
            }
            else{
                sum += a[i];
                i++;
            }
        }
        cout << sum << endl;           
    }
    
    
}

