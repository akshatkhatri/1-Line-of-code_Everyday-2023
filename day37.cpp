class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> arr(m,vector<int>(n));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){

                if(i==0){
                    if(j==0){
                        arr[i][j]=(mat[i][j]+mat[i+1][j]+mat[i][j+1]+mat[i+1][j+1])/4;
                    }
                    else if(j==n-1){
                        arr[i][j]=(mat[i][j]+mat[i+1][j]+mat[i][j-1]+mat[i+1][j-1])/4;
                    }
                    else{
                        arr[i][j]=(mat[i][j]+mat[i][j-1]+mat[i][j+1]+mat[i+1][j-1]+mat[i+1][j]+mat[i+1][j+1])/6;
                    }
                }
                else if(i==m-1){
                    if(j==0){
                        arr[i][j]=(mat[i][j]+mat[i-1][j]+mat[i][j+1]+mat[i+1][j+1])/4;
                    }
                    else if(j==n-1){
                        arr[i][j]=(mat[i][j]+mat[i][j-1]+mat[i-1][j-1]+mat[i-1][j])/4;
                    }
                    else{
                        arr[i][j]=(mat[i][j]+mat[i][j-1]+mat[i][j+1]+mat[i-1][j-1]+mat[i-1][j]+mat[i-1][j+1])/6;
                    }
                }
                else{
             arr[i][j]=(mat[i][j]+mat[i][j - 1]+mat[i][j + 1]+mat[i - 1][j - 1]+mat[i - 1][j]+mat[i - 1][j + 1] + mat[i + 1][j - 1]+mat[i + 1][j]+mat[i + 1][j + 1]) / 9;

                }
            }
        }
            return arr;
    }
};
/*The algorithm iterates through each element of the input matrix. For each element, it calculates the sum of its own value and the values of its eight neighboring elements (if they exist within the bounds of the matrix). The count variable keeps track of the number of elements considered in the sum.

The calculated sum is then divided by the count to obtain the average value. This average value is assigned to the corresponding position in the new matrix.

Special handling is provided for elements at the borders and corners of the matrix, where the number of neighbors may be fewer than eight. In these cases, the algorithm adjusts the calculation to account for the available neighbors.

The final result is a smoothed matrix that represents a blurred version of the original image, where each pixel value is an average of its surrounding pixels.*/
