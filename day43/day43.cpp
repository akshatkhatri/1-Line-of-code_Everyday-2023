class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>anagram_map;
        vector<int>res;
        for(int i=0;i<p.length();i++){
            anagram_map[p[i]]++; 
        }
        int start=0;
        int end=p.length();

        for(int i=start;end<=s.length();start++){

            for(int j=start;j<end;j++){
                if(anagram_map[s[j]]==0){
                    break; 
                }
            }
            res.push_back(start);
            start++;
        }
        return res;

    }
};
