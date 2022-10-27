#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums{6,10,4,9};
    int n = nums.size();
    string ans;
    if(n<1) return 0;
    while(n>2){
        for(int i = 1; i < n; i++){
            nums[i-1] = (nums[i-1] + nums[i]) % 10;
        }
        n--;
    }   

    for(int i = 0; i < n; i++){
        nums[i] = nums[i] % 10;
        cout<<nums[i]<<" ";
    }

    for(int i = 0; i < n; i++){
        ans.append(to_string(nums[i]));
        // cout<<nums[i]<<" ";
    }

    cout<<endl<<ans;
}