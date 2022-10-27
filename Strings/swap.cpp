#include <bits/stdc++.h>
using namespace std;


int main(){
    string a = "Supposed to be second" , b = "Supposed to be first";
    // a.push_back('s');
    a = a + b; 
    b = a.substr(0,a.size()-b.size());
    a = a.substr(b.size(),a.size());
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}