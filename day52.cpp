
class Solution {
public:
    
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> my_hash;

        for(int i = 0; i < nums.size(); i++) {
            my_hash[nums[i]]++;

            // return true if freq crosses 2 
            if(my_hash[nums[i]] >= 2) {
                return true;
            }
        }

        // No duplicates found
        return false;
    }
};
