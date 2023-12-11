238. Product of Array Except Self


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int>left_sum(nums.size(),1);
        vector<int>right_sum(nums.size(),1);
        int product=1;

        left_sum[0]=1;
        for(int i=1;i<nums.size();i++){

            left_sum[i]=product*nums[i-1];
            product=product*nums[i-1];
        }
        product=1;
        for(int j=nums.size()-2;j>=0;j--){
            right_sum[j]=product*nums[j+1];
            product=product*nums[j+1];
        }
        vector<int> result(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            result[i] = left_sum[i] * right_sum[i];
        }

        return result;    
    
    }
};


      
