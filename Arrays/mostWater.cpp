#include <iostream>
#include <vector>

using namespace std;

int main(){
        vector<int> height{1,8,6,2,5,4,8,3,7};
        int n = height.size();
        int l = 0, r = n-1 , maxA = 0, width = n-1,Area;
        while(l<r && width>0){
            if(height[l] < height[r]){
                Area = width*height[l];
                maxA = max(maxA,Area);
                l+=1;
            }
            else if(height[r] < height[l]){
                Area = width*height[r];
                maxA = max(maxA,Area);
                r-=1;
            }
            else{
                Area = width*height[l];
                maxA = max(maxA,Area);
                l+=1;
            }
            width-=1;
        }
        cout<<maxA;
        return 0;
    }