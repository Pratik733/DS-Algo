#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> nums{-1,0,1,2,-1,-4};
    vector<vector<int>>res;
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int l, r, threesum;
    for (int i = 0; i <= n-3; i++)
    {
        if(i>0 && nums[i] == nums[i-1]){
            continue;
        }
        l = i+1;
        r = n-1;
        while (l<r)
        {
            threesum = nums[i] + nums[l] + nums[r];
            if (threesum < 0)
            {
                l+=1;
            }
            else if (threesum > 0)
            {
                r-=1;
            }
            else
            {
                res.push_back({nums[i],nums[l],nums[r]});
                l+=1;
                while (nums[l] == nums[l-1] && l < r)
                {
                    l+=1;
                }
                
            }
              
        }
        
    }

    for (int i = 0; i < res.size(); i++) {
        cout<<'[';
        for (int j = 0; j < res[i].size(); j++)
        {
            cout<<' '<<res[i][j]<<" ";
        }
        cout<<']';
        
    }
    
    
    return 0;
}