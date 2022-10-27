#include <bits/stdc++.h>
using namespace std;

bool findPair(vector<int> &arr, int size, int n){
    unordered_set<int>m;
    int sum;
    // map <int,int> mp;
    // for(int x:arr){
    //     mp[x]++;
    // }
    
    for (int i = 0; i < size; i++)
    {       
        sum = arr[i]+n;
        if(m.find(arr[i]) != m.end() || m.find(sum+n) != m.end()){
            return true;
        }
        else{
            m.insert(sum);
            cout<<sum;
        }
    }
    return false;
    
}

int main()
{
    vector<int> nums{1,2,6,3,4};
    int k = 0;
    cout << findPair(nums, nums.size(), k);
}
