class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string result;
        for(int i=0;i<nums.size();i++){
            char opposite_binary='1';
            if(nums[i][i]=='1'){
                opposite_binary='0';
            }
            result+=opposite_binary;
        }
        return result;
    }
};
