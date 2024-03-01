#include <vector>
#include <unordered_set>

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Checking for valid rows
        for (int i = 0; i < 9; ++i) {
            if (!isValidGroup(board, i, 0, i, 8)) {
                return false;
            }
        }

        // Checking for valid columns
        for (int j = 0; j < 9; ++j) {
            if (!isValidGroup(board, 0, j, 8, j)) {
                return false;
            }
        }

        // Checking for valid subgrids
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                if (!isValidGroup(board, i, j, i + 2, j + 2)) {
                    return false;
                }
            }
        }

        return true;  // The board is valid
    }

private:
    bool isValidGroup(const vector<vector<char>>& board, int startRow, int startCol, int endRow, int endCol) {
        unordered_set<char> sudoku_hash;

        for (int i = startRow; i <= endRow; ++i) {
            for (int j = startCol; j <= endCol; ++j) {
                char current = board[i][j];

                if (current != '.' && sudoku_hash.count(current) > 0) {
                    return false;
                }

                sudoku_hash.insert(current);
            }
        }

        return true;  // The group is valid
    }
};
