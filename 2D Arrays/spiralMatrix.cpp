#include <bits/stdc++.h>
using namespace std;
void spiralMatrix(vector<vector<int>> &matrix)
{
    int top = 0, bottom = matrix.size() - 1, left = 0, right = matrix[0].size() - 1;
    int direction = 0;
    while (top <= bottom && left <= right)
    {
        if (direction == 0)
        {
            for (int i = left; i <= right; i++)
            {
                cout << matrix[top][i] << ' ';
            }
            top++;
        }
        else if (direction == 1)
        {
            for (int i = top; i <= bottom; i++)
            {
                cout << matrix[i][right] << ' ';
            }
            right--;
        }
        else if (direction == 2)
        {
            for (int i = right; i >= left; i--)
            {
                cout << matrix[bottom][i]<< ' ';
            }
            bottom--;
        }
        else if (direction == 3)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << matrix[i][left] << ' ';
            }
            left++;
        }
        direction = (direction + 1)%4;      
    }
}
int main()
{
    vector<vector<int>> arr{
        {1, 2, 3, 4},
        {12, 13, 14, 5},
        {11, 16, 15, 6},
        {10, 9, 8, 7}};
    spiralMatrix(arr);
    return 0;
}