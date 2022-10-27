#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:

    bool checkPalindorme(string s, int i , int j){
        while (i<j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else{
                return false;
            }    
        }
        return true;
    }

    bool isPalindromeTwo(string s) {
        int n = s.size();
        if (n==0)
        {
            return true;
        }
        int l = 0, r = n-1;
        while (l<r)
        {
            if (s[l] == s[r])
            {
                l++;
                r--;
            }

            else{
                return(checkPalindorme(s, l, r-1) || checkPalindorme(s, l+1 , r));
            }
            
        }
        return true;
        
        
        
    }
};

int main(){
    string s = "aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga";
    for (int i = 0; i < (s.size()-1)/2 ; i++)
    {
        cout<<s[i];
    }
    cout<<endl;
    for (int i = s.size()-1; i >= (s.size()-1)/2 ; i--)
    {
        cout<<s[i];
    }
    
    Solution obj;
    cout<<obj.isPalindromeTwo(s);
    return 0;
}