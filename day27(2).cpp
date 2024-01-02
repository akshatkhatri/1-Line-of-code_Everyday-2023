2956. Find Common Elements Between Two Arrays
class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int res1=0;
        int res2=0;
        vector<int>result;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    res1++;
                    break;
                }
            }
        }
        for(int k=0;k<m;k++){
            for(int l=0;l<n;l++){
                if(nums2[k]==nums1[l]){
                    res2++;
                    break;
                }
            }
        }
        result.push_back(res1);
        result.push_back(res2);
        return result;
    }
};
