#include <iostream>
using namespace std;
//Time O(N) Space O(N)

// int main(){
//     int heights[] = {4,2,0,3,2,5};
//     int n = sizeof(heights)/sizeof(heights[0]);
//     int leftMax[n], rightMax[n];
//     leftMax[0] = heights[0];
//     for (int i = 1; i < n; i++)
//     {
//         leftMax[i] = max(leftMax[i-1],heights[i]);
//     }
//     rightMax[n-1] = heights[n-1];
//     for (int i = n-2; i >= 0; i--)
//     {
//         rightMax[i] = max(rightMax[i+1],heights[i]);
//     }

//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans += (min(leftMax[i],rightMax[i])-heights[i]); 
//     }

//     cout<<ans;
//     return 0; 
// }

//Time O(N) Space O(1)

int main(){
    int heights[] = {4,2,0,3,2,5};
    int n = sizeof(heights)/sizeof(heights[0]);
    int l = 0 , r = n-1;
    int leftMax = heights[l], rightMax = heights[r];
    int ans = 0;

    while (l < r)
    {
        if (leftMax < rightMax)
        {
            l += 1;
            leftMax = max(leftMax,heights[l]);
            ans += leftMax - heights[l];
        }
        else
        {
            r -=1;
            rightMax = max(rightMax,heights[r]);
            ans += rightMax - heights[r];
        }
    }

    cout<<ans;

    return 0 ;
}

