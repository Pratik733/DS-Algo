#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    int noOfMerges(vector<int>& nums){
        int n = nums.size();
        int l = 0 , r = n-1 , count = 0;
        while (l < r)
        {
            if (nums[l] == nums[r])
            {
                l++;
                r--;
            }
            else if (nums[l] < nums[r])
            {
                l++;
                nums[l] += nums[l-1];
                count++;
            }
            else{
                r--;
                nums[r] += nums[r+1];
                count++;
            }
            
        }
        return count;
        
    }
   
};


int main(){
    vector<int> nums{5,5,4,7,9,0,7,9,2,2,10};
    solution obj;
    cout<<"Number of Merges Required :- "<<obj.noOfMerges(nums);
}