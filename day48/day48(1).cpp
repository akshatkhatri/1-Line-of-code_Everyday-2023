class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int max_jump=nums[0];
        for(int i=0;i<n-1;i++){
            if(nums[i]>=max_jump){
                max_jump=nums[i];
            }
            else{
                max_jump--;
            }
            if(max_jump<=0){
                return false;
            }
        }
        return true;
    }
};
