#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool dfs(int r, int c, int i, vector<vector<char>> &board, string word, int rows, int cols,set<vector<int>> &path)
{
    if (i == word.size())
    {
        return true;
    }
    if (r < 0 or c < 0 or
        r >= rows or c >= cols or
        word[i] != board[r][c] or
        path.find({r, c}) != path.end())
    {
        return false;
    }
    path.insert({r, c});
    bool res = (dfs(r + 1, c, i + 1, board, word, rows, cols, path) or
                dfs(r - 1, c, i + 1, board, word, rows, cols, path) or
                dfs(r, c + 1, i + 1, board, word, rows, cols, path) or
                dfs(r, c - 1, i + 1, board, word, rows, cols, path) );
    path.erase({r, c});
    return res;
}

bool exist(vector<vector<char>> &board, string word)
{
    int rows = board.size(), cols = board[0].size();
    set<vector<int>> path;

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            if (dfs(r, c, 0, board, word, rows, cols, path))
            {
                return true;
            }
        }
    }
    return false;
}


int main()
{
    vector<vector<char>> board{{'A','A','A','A','A','A'},{'A','A','A','A','A','A'},{'A','A','A','A','A','A'},{'A','A','A','A','A','A'},{'A','A','A','A','A','A'},{'A','A','A','A','A','A'}};
    string word ="AAAAAAAAAAAAAA";
    cout<<exist(board,word);
    return 0;
}