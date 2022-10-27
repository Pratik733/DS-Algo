#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr{1, 4, 3, 3, 5, 6, 2, 2, 1};
    int start = 0, end = arr.size()-1, ans = 0;
    while(end > start){
        if(arr[start] == arr[end]){
            start++;
            end--;
        }
        else if(arr[start] > arr[end]){
            arr[end - 1] = arr[end - 1] + arr[end];
            end--;
            ans++;
        }
        else{
            arr[start+1] = arr[start + 1] + arr[start];
            start++;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}