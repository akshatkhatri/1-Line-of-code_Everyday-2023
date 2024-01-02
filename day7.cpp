class Solution {
public:
    int candy(vector<int>& ratings) {
        
        // int candy_array[ratings.size()]=1;

        vector<int> candy_array(ratings.size());
        fill(candy_array.begin(), candy_array.end(), 1);
        int candy_array_sum=0;

        for(int i=1;i<ratings.size();i++){
            if(ratings[i] > ratings[i-1]){

                candy_array[i]=candy_array[i]+candy_array[i-1];
            }
        }

        for(int j=ratings.size()-2;j>=0;j--){
            if(ratings[j] > ratings[j+1]){

                candy_array[j] = max(candy_array[j], candy_array[j + 1] + 1);
            }
        }

        for(int k=0;k<ratings.size();k++){
            candy_array_sum+=candy_array[k];
        }

    return candy_array_sum;    
    }
};
