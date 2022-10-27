#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        if (n==0)
        {
            return true;
        }
        
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
            {
                vec.push_back(tolower(s[i]));
            }
        }
        

        int l=0, r=vec.size()-1;
        while (l<r)
        {
            if (vec[l] == vec[r])
            {
                l++;
                r--;
            }
            else{
                return false;
            }
            
        }

        return true;
        
        
    }
};

int main(){
    string s = "race a car";
    Solution obj;
    cout<<obj.isPalindrome(s);
    return 0;
}