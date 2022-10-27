#include <bits/stdc++.h>
using namespace std;
 
void findNumbers(vector<int>& arr, int sum, vector<vector<int> >& res, vector<int>& r, int i)
{

    if (sum == 0) {
        res.push_back(r);
        return;
    }
 
    while (i < arr.size() && sum - arr[i] >= 0) {
 
        r.push_back(arr[i]);
 
        findNumbers(arr, sum - arr[i], res, r, i);
        i++;

        r.pop_back();
    }
}
 

vector<vector<int> > combinationSum(vector<int>& arr, int sum)
{
    vector<int> r;
    vector<vector<int>> res;
    sort(arr.begin(), arr.end());
 
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    findNumbers(arr, sum, res, r, 0);
    return res;
}

int main()
{
    vector<int> arr{1,2,3};
    int n = arr.size();
    int sum = 6;
    vector<vector<int> > res = combinationSum(arr, sum);
 
    if (res.size() == 0) {
        cout << "Empty";
        return 0;
    }
 
    for (int i = 0; i < res.size(); i++) {
        if (res[i].size() > 0) {
            cout << " ( ";
            for (int j = 0; j < res[i].size(); j++)
                cout << res[i][j] << " ";
            cout << ")";
        }
    }
  return 0;
}