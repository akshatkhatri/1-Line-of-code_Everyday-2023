class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;

             while(i<nums.size()){
                    if(nums[i]>0 && nums[i]<=nums.size()-1 && nums[nums[i]-1]!=i+1){
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
