class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int i = 0;
        int l = flowerbed.size()-1;
          if (n == 0) {
            return true;
        }
        for (int i = 0; i <= l; i++) {
            if(flowerbed[i]==0&&(i==0||flowerbed[i-1]==0)&&(i==l || flowerbed[i+1]==0)){
                flowerbed[i]=1;
                count++;
                if(count==n){
                    return true;
            }
                
            }
            
        }
        return 0;
    }
};
