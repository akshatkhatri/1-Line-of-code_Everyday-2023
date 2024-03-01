class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int total_water=0;
        int dist;
        while(left<right){

            if(height[left]<=height[right]){
                dist=height[left]*(right-left);
                left++;
            }
            else{
                dist=height[right]*(right-left);
                right--;
            }
            
            total_water=max(total_water,dist);
        }
        return total_water;
    }
};
