class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int column=matrix[0].size();
        vector<int>ans;

        int left=0;
        int right=column-1;
        int top=0;//1
        int bottom=row-1;

        while(left<=right && top<=bottom){

        // below loop is used to traverse from left to right
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }
            top++;
        // below loop is used to traverse from top to bottom
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
            right--;
        // below loop is used to traverse from right to left
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
        
        // below loop is used to traverse from bottom to top
        if(left<=right){
        for(int i=bottom;i>=top;i--){
            ans.push_back(matrix[i][left]);
        }
        left++;
        }
    }
    return ans;
}
};
