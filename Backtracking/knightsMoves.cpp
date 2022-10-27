#include <bits/stdc++.h>
using namespace std;

void display(vector<vector<int>>& chess){
    for (long long int i = 0; i < chess.size(); i++)
    {
        for (long long int j = 0; j < chess.size(); j++)
        {
            cout<<chess[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

void printKnightsTour(vector<vector<int>>& chess, int n, int r, int c, int upcomingMove) {
    
    if(r<0 || c<0 || r>=n || c>=n || chess[r][c]!=0){
        return;
    }
    if (upcomingMove == ((n*n)-1))
    {
        chess[r][c] = upcomingMove;
        display(chess);
        // chess[r][c]=0;
        return;
    }
    chess[r][c] = upcomingMove;
    printKnightsTour(chess,n,r-2,c+1,upcomingMove+1);
    printKnightsTour(chess,n,r-1,c+2,upcomingMove+1);
    printKnightsTour(chess,n,r+1,c+2,upcomingMove+1);
    printKnightsTour(chess,n,r+2,c+1,upcomingMove+1);
    printKnightsTour(chess,n,r+2,c-1,upcomingMove+1);
    printKnightsTour(chess,n,r+1,c-2,upcomingMove+1);
    printKnightsTour(chess,n,r-1,c-2,upcomingMove+1);
    printKnightsTour(chess,n,r-2,c-1,upcomingMove+1);
    chess[r][c]=0;

}   

int main(){
    int n = 8, r = 0, c = 0;
    vector<vector<int>> board(n,vector<int> (n,0));
    printKnightsTour(board,n,r,c,0);
    return 0;
}