#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> result;
        int start = intervals[0][0], end = intervals[0][1];
        for(auto& i : intervals){
            if (i[0] > end)
            {
                result.push_back({start, end});
                start = i[0];
                end = i[1];
            }
            else{
                end = max(end, i[1]);
            }
        }
        result.push_back({start, end});
        return result;
    }
};

int main()
{
    vector<vector<int>> intervals{{1, 2}, {4, 5}, {6, 7}, {3, 4}, {4, 7}};
    Solution obj;
    vector<vector<int>> ans = obj.merge(intervals);
    for(auto& i : ans){
        cout<<i[0]<<","<<i[1]<<" ";
    }
    return 0;
}