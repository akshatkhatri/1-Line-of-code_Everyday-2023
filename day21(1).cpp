class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        int m=l.size();
        for(int i=0;i<m;i++)
        {
            vector<int> v= vector<int>(nums.begin()+l[i], nums.begin()+r[i]+1);
            sort(v.begin(),v.end());
            bool isarith=true;
            if(v.size()>1)
            {
                int diff=v[1]-v[0];
                for(int j=1;j<v.size();j++)
                {
                    if(v[j]- v[j-1]!= diff)
                    {
                        isarith= false;
                    }
                }
            }
            else 
            {
                isarith=false;
            }
            ans.push_back(isarith);
        }
        return ans;
    }
};
