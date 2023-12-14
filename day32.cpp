/*Introduction:
The problem of finding the difference between ones and zeros in both rows and columns in a binary matrix involves a specific procedure that provides valuable insights into the distribution of ones and zeros. This problem is defined by creating a difference matrix based on the counts of ones and zeros in each row and column. Let's explore the underlying concept and the step-by-step procedure for obtaining this difference matrix.

The Problem:
Given a binary matrix, the task is to create a difference matrix, where each element represents the difference between the counts of ones and zeros in the corresponding row and column. The procedure involves calculating the number of ones and zeros separately for each row and column and then using these counts to populate the difference matrix.*/

#include <vector>

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int> rows_array(grid.size());
        vector<int> column_array(grid[0].size());
        int sum = 0;

        // calculating row sums
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                sum = sum + grid[i][j];
            }
            rows_array[i] = sum;
            sum = 0;
        }

        sum = 0;

        // calculating column sums
        for (int i = 0; i < grid[0].size(); i++) {
            for (int j = 0; j < grid.size(); j++) {
                sum = sum + grid[j][i];
            }
            column_array[i] = sum;
            sum = 0;
        }

        // updating grid values
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                grid[i][j] = rows_array[i] + column_array[j] -(grid.size()-rows_array[i])-(grid[0].size()-column_array[j]);
            }
        }

        return grid;
    }
};


  
/*Understanding the Procedure:

    Calculate Ones and Zeros in Rows:
        Iterate through each row of the binary matrix.
        Count the number of ones and zeros in the current row.
        Store these counts in a separate array (let's call it rows_array).

    Calculate Ones and Zeros in Columns:
        Iterate through each column of the binary matrix.
        Count the number of ones and zeros in the current column.
        Store these counts in another array (let's call it column_array).

    Populate the Difference Matrix:
        Iterate through each element of the binary matrix.
        Use the counts stored in rows_array and column_array to calculate the difference according to the formula:
        diff[i][j] = onesRowi + onesColj - zerosRowi - zerosColj

Discussion:
This problem provides an interesting perspective on the distribution of ones and zeros in a binary matrix. The difference matrix highlights the disparity between the counts in rows and columns, giving insights into how the ones and zeros are distributed across the matrix.

One crucial aspect to note is the importance of correctly calculating and updating the counts in the rows_array and column_array. The accuracy of the final difference matrix relies on these counts being calculated for each row and column in the matrix.

Conclusion:
The problem of finding the difference between ones and zeros in rows and columns is a valuable exercise in understanding the distribution of binary values in a matrix. The step-by-step procedure involves calculating counts for each row and column and using these counts to create a difference matrix. This matrix provides a comprehensive view of how the binary values are distributed across the matrix, offering valuable insights for further analysis and understanding.*/
