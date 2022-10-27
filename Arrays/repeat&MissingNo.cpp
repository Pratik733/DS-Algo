#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int arr[] = {3, 1, 2, 5, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int Sum = 0, sqSum = 0, rSum = 0, rsqSum = 0;
    for (int i = 0; i < n; i++)
    {
        Sum += arr[i];
        sqSum += pow(arr[i],2);
        rSum += (i+1);
        rsqSum += pow(i+1,2);
    }
    // cout<<Sum<<" "<<sqSum<<" "<<rSum<<" "<<rsqSum;             // ------Use long double as data type for very big arrays--------           
    int rep = (((sqSum - rsqSum)/(Sum - rSum))+(Sum-rSum))/2;     //    square diff
    int miss = rep - Sum + rSum;                                  //   ------------  + sum diff
                                                                  //     sum diff                  = REPEATED Number
    cout<<"Repeated Value is :- "<<rep<<endl;                     //-----------------------------
    cout<<"Missing Value is :- "<<miss;                           //              2

    return 0;                                                     //     REPEATED Number - sum diff = Missing Number
}