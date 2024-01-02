class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        // int big_int_handler=nums.size()-1;

             while(i<nums.size()){
                    if(nums[i]>0 && nums[i]<=nums.size()-1 && nums[nums[i]-1]!=nums[i]){
                    swap(nums[i],nums[nums[i]-1]);    
                    }

                    else
                    i++;

                    
             }
        
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=j+1){
                return j+1;
            }
        }
        return nums.size()+1;

    }
};
