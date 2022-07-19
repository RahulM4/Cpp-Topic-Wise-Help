
#include <bits/stdc++.h>
using namespace std;


bool isSafe(vector<vector<bool>> &board, int row, int col)
{
    int n = board.size();
    for (int i = 0; i <= row; i++)
    {
        // checking if any queen already placed on same column previously
        if (board[i][col])
            return false;
        // checking if all diagonals are safe -
        if (row - i >= 0 && col - i >= 0 && board[row - i][col - i])
            return false;
        if (row - i >= 0 && col + i < n && board[row - i][col + i])
            return false;
    }
    return true;
}


int solve(vector<vector<bool>> &board, int row)
{
    if (row == board.size())
        return 1;
    int count = 0;
    for (int col = 0; col < board.size(); col++)
        if (isSafe(board, row, col))
        {                                   // check if we can place at (row, col)
            board[row][col] = true;         // place the queen at (row, col)
            count += solve(board, row + 1); // explore for the next row. The function will return 1 if all N queens get placed for current combination
                                            // backtrack - remove previously placed queen and try for different columns
            board[row][col] = false;
        }
    return count;
}


int totalNQueens(int n)
{
    vector<vector<bool>> board(n, vector<bool>(n, false));
    return solve(board, 0);
}



int main()
{
    int n;
    cin >> n;
    cout<<totalNQueens(n);
}