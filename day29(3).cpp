
75. Sort Colors
class Solution {
public:
    void sortColors(vector<int>& nums) {

        int slow = 0;
        int fast = nums.size()-1;
        
        for(int i=0;i<=fast;){
            if(nums[i]==0){
                swap(nums[i],nums[slow]);
                slow++;
                i++;
            }
            else if(nums[i]==2){
                swap(nums[i],nums[fast]);
                fast--;
            }
            else{
                i++;
            }

        }
     
    }
};
        
