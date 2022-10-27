#include <iostream>
#include <map>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};
    map <int,int> mp;
    for(int x:arr){
        mp[x]++;
    }
    //syntax for printing map
    map<int, int> :: iterator iter;
    for ( iter=mp.begin(); iter!=mp.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<'\n';
    }
    //check if contains duplicate
    for(int x:arr){
        if(mp[x] >= 2){
            cout<<"contains duplicate";
            break;
        }
    }
    cout<<"no duplicate";
    
    return 0;
}