class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element;
        int count=0;

        for(int i=0;i<nums.size();i++){
            if(count==0){
                count++;
                element=nums[i];
            }
            else if(nums[i]==element){
                count++;
            }
            else{
                count--;
            }
        }
        return element;
    }
};
