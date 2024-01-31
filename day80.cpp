class Solution {

public:
    vector<int>generaterows(int rows){
            
        vector<int>ans;
        ans.push_back(1);
        long long res=1;


        for(int col=1;col<rows;col++){
            res=res*(rows-col);
            res=res/col;
            ans.push_back(res);
        }
        return ans;

    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> final_ans;

        for(int i=1;i<=numRows;i++){

            final_ans.push_back(generaterows(i));
        }

        return final_ans;
      
    }
 
};
