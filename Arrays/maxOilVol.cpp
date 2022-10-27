#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> Vol  {60, 100, 120};
    vector<int> Price{10, 20, 30};
    int bal = 50;
    int totalVol = 0;
    set<pair<float,int>> cans;
    double ratePerVol;

    for(int i = 0 ; i < Vol.size() ; i++){
        ratePerVol = Price[i]/(float)Vol[i];
        // cout<<ratePerVol;
        cans.insert({ratePerVol,i});
    }

    for(auto i:cans){
        cout<<"("<<i.first<<","<<i.second<<")"<<' ';
    }

    cout<<cans.size()<<endl;
    
    for(int i = cans.size()-1 ; i >= 0 ; i--){
        if(bal-Price[cans[i].second] < 0){
            cout<<"skip "<<Price[cans[i].second]<<" ";
            continue;
        }
        if(bal == 0){
            break;
        }
        bal = bal - Price[cans[i].second];
        totalVol += Vol[cans[i].second];
    }

    cout<<totalVol;


    return 0;
}