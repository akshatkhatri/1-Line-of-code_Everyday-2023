class Solution {
public:
    int trap(vector<int>& height) {

        int left=0;
        int right=height.size()-1;

        int max_left=0;
        int max_right=0;
        int trapped_water=0;

        
        while(left<right){
            if(height[left]<=height[right]){

                max_left=max(max_left,height[left]);
                trapped_water+=max_left-height[left];
                left++;
            }

            else{
                max_right=max(max_right,height[right]);
                trapped_water+=max_right-height[right];
                right--;
            }
        }
        return trapped_water;
    }
};
