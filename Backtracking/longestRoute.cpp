#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxPath = INT_MIN;
    void findPath(vector<vector<int>> &mat, int rSize, int cSize, int startr, int startc, int endr, int endc, int m){
    if (startr == endr && startc == endc)
    {
        maxPath= max(maxPath,m);
        return;
    }
    
    if(startr<0 || startc<0 || startr >= rSize || startc >=cSize){
        // cout<<mat[startr][startc];
        return;
    }
    if (mat[startr][startc] != 1)
    {
        return;
    }
    if ( mat[startr][startc] == 1)
    {
    mat[startr][startc] = 0;
    findPath(mat, rSize, cSize, startr+1, startc, endr, endc, m+1);
    findPath(mat, rSize, cSize, startr, startc+1, endr, endc, m+1);
    findPath(mat, rSize, cSize, startr-1, startc, endr, endc, m+1);
    findPath(mat, rSize, cSize, startr, startc-1, endr, endc, m+1);
    mat[startr][startc] = 1;
    }
        
    }
    void findLongestPath(vector<vector<int>> &mat, int startr, int startc, int endr, int endc ){
        // vector<int> ans;
        int rSize = mat.size();
        int cSize = mat[0].size();
        findPath(mat, rSize, cSize, startr, startc, endr, endc, 0);
        cout<<maxPath;
    }
};



int main(){ 
    vector<vector<int>> mat{ { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
                             { 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1 },
                             { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }};
    Solution obj;
    obj.findLongestPath(mat, 0, 0, 1, 9);
    return 0;
}