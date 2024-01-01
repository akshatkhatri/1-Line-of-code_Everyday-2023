class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        int big_int_handler=nums.size()-1;

        // while(i<nums.size()){

            // if(nums[i]==i+1 || nums[i]<=0){
            // i++;
            // }
            // else
            
                while(i<nums.size() && nums[i]!=i+1){
                    if(nums[i]<=0 || nums[i]==i+1){
                        i++;
                        // break;
                    }
                    else if(nums[i]>=nums.size()){
                        if(big_int_handler>=0){
                        swap(nums[i],nums[big_int_handler]);
                        big_int_handler--;
                        }
                        else{
                            break;
                        }
                    }
                    else if(nums[i]<nums.size())
                    swap(nums[i],nums[nums[i]-1]);
                    // print_array(nums);

                    for(int k=0;k<nums.size();k++){
                            cout<<nums[k]<<" ";
                        }
                }
            
            //printing the array for debugging purposes

            
        // }
        
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=j+1){
                return j+1;
            }
        }
        return nums.size()+1;

    }
};
