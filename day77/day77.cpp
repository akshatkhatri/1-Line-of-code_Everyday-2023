class Solution {
public:
    int subarraysum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        m[0] = 1;
        int curr = 0, ans = 0;

        for (int i = 0; i < nums.size(); ++i) {
            curr += nums[i];
            if (m.find(curr - k) != m.end()) {
                ans += m[curr - k];
            }
            m[curr]++;
        }

        return ans;
    }

    int numSubmatrixSumTarget(vector<vector<int>>& mat, int target) {
        int ans = 0;

        for (int i = 0; i < mat.size(); ++i) {
            vector<int> sum(mat[0].size(), 0);
            for (int j = i; j < mat.size(); ++j) {
                for (int k = 0; k < mat[0].size(); ++k) {
                    sum[k] += mat[j][k];
                }

                ans += subarraysum(sum, target);
            }
        }

        return ans;
    }
};
