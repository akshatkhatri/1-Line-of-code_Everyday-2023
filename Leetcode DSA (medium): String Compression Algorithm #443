class Solution {
public:
    int compress(vector<char>& chars) {
        int count=1;
        int i=0;
        for(int j=1;j<=chars.size();j++){
            if(j<chars.size() && chars[j]==chars[j-1]){
                count++;
            }
            else{
                chars[i]=chars[j-1];
                i++;
                if(count>=2){
                     string countStr = to_string(count);
                    for (int k = 0; k < countStr.size(); ++k) {
                        chars[i] = countStr[k];
                        i++;
                    }
                }
                count=1;
            }
        }
        
        return i;
        
    }
};
