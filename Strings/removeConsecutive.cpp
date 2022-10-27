#include <iostream>

using namespace std;

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        int n = S.size();
        char unique;
        string ans = "";
        for(char x: S){
            if(x != unique){
                ans.push_back(x);
                unique = x;
            }
        }
        return ans;
    }
};

int main(){
    string s = "aabaa";
    Solution obj;
    cout<<obj.removeConsecutiveCharacter(s);
    return 0;
}