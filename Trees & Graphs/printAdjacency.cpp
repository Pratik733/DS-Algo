#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<vector<int>> adj{{1,4},{0,2,3,4},{1,3},{1,2,4},{0,1,3}};
    vector<vector<int>> ans;
    // cout<<adj[1][1];
    set<int> v;

    for (int i = 0; i < adj.size(); i++)
    {
        for (int j = 0; j < adj[i].size(); j++)
        {
            v.insert(adj[i][j]);
        } 
    }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i];
    // }
    set<int>::iterator it;
    int i = 0;
    for (it=v.begin(); it!=v.end(); ++it){
        std::cout << ' ' << *it;
        ans[i].push_back(*it);
        for (int j = 1; j <= adj[i].size(); j++)
        {
            ans[i].push_back(adj[i][j]);
        }
        i++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        } 
    }
    return 0;
}