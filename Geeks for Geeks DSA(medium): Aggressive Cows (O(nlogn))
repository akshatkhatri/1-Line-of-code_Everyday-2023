class Solution {
public:

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int low=1;
        int high=stalls[stalls.size()-1];
        int res=-1;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            
            if(cow_is_possible(stalls,k,mid)){
                res=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            
        }
        return res;
    }
    public:
    bool cow_is_possible(vector<int>&stalls,int k,int min_dist){
        int cow_placed=1;
        int last_cow=stalls[0];
        
        for(int i=1;i<stalls.size();i++){
            if(stalls[i]-last_cow >=min_dist){
                cow_placed++;
                last_cow=stalls[i];
            }
            if(cow_placed>=k){
                return true;
            }
        }
        
        return false;
    }
};
