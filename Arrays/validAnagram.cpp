#include <iostream>
#include <vector>
#include <map>

using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
        map <char,int> mp1 , mp2;
        for(char x :s){
        mp1[x]++;
        }
        for(char y :t){
        mp2[y]++;
        }
        
        if(s.size() != t.size()){
            return false;
        }
        
        for(int i=0; i<s.size(); i++){
            if(mp1[s[i]] != mp2[s[i]]){
                return false;
            }
        }
        return true;
    }
};

int main(){
    string s = "a", t = "ab";
    
    Solution obj;
    cout<<obj.isAnagram(s , t);
    return 0;
}