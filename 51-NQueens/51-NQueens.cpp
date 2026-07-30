// Last updated: 7/30/2026, 10:07:56 AM
class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        
        // Trackers for safe placement
        unordered_set<int> cols;
        unordered_set<int> posDiag; // (row + col)
        unordered_set<int> negDiag; // (row - col)
        
        backtrack(0, n, board, ans, cols, posDiag, negDiag);
        return ans;
    }

private:
    void backtrack(int row, int n, vector<string>& board, vector<vector<string>>& ans,
                   unordered_set<int>& cols, unordered_set<int>& posDiag, unordered_set<int>& negDiag) {
        // Base Case: If we've successfully placed queens in all rows, save the board configuration
        if (row == n) {
            ans.push_back(board);
            return;
        }
        
        for (int col = 0; col < n; col++) {
            // If the current position is under attack, skip it
            if (cols.count(col) || posDiag.count(row + col) || negDiag.count(row - col)) {
                continue;
            }
            
            // Place the queen
            board[row][col] = 'Q';
            cols.insert(col);
            posDiag.insert(row + col);
            negDiag.insert(row - col);
            
            // Move to the next row
            backtrack(row + 1, n, board, ans, cols, posDiag, negDiag);
            
            // Backtrack (Undo the placement)
            board[row][col] = '.';
            cols.erase(col);
            posDiag.erase(row + col);
            negDiag.erase(row - col);
        }
    }
};