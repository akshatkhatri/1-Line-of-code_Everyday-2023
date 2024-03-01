class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        // count the frequency for each integer
        unordered_map<int, int> freq;
        for (size_t i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            freq[num]++;
        }

        // find the maximum frequency
        int maxFreq = 0;
        for (auto it = freq.begin(); it != freq.end(); ++it) {
            int f = it->second;
            maxFreq = max(maxFreq, f);
        }

        // calculate the sum of the frequencies with `maxFreq`
        int result = 0;
        for (auto it = freq.begin(); it != freq.end(); ++it) {
            int f = it->second;
            if (f == maxFreq) {
                result += f;
            }
        }
        return result;
    }
};
