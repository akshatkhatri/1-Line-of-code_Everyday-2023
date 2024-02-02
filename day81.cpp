//POTD
#include <vector>
#include <unordered_set>

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int i = 0; i < 9; ++i) {
            if (!isValidGroup(board, i, 0, i, 8)) {
                return false;
            }
        }

        for (int j = 0; j < 9; ++j) {
            if (!isValidGroup(board, 0, j, 8, j)) {
                return false;
            }
        }

        
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                if (!isValidGroup(board, i, j, i + 2, j + 2)) {
                    return false;
                }
            }
        }

        return true;  
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



/* Problem statement

You have been given an array ‘a’ of ‘n’ non-negative integers.You have to check whether the given array is sorted in the non-decreasing order or not.


Your task is to return 1 if the given array is sorted. Else, return 0.


Example :

Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
Output: 1

The given array is sorted in non-decreasing order; hence the answer will be 1.

*/

//BRUTE-FORCE APPROACH

int isSorted(int n, vector<int> a) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                return false;
            }
        }
    }
    return true;
}

// OPTIMAL APPROACH

int isSorted(int n, vector<int> a) {
    // Iterate through the array and compare adjacent elements
    for (int i = 0; i < n - 1; i++) {
        // If the current element is greater than the next, not sorted
        if (a[i] > a[i + 1]) return false;
    }
    // Array is sorted if the loop completes without returning false
    return true;
}
