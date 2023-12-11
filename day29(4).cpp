242. Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>anagram_map;

        for(int i=0;i<s.length();i++){
            anagram_map[s[i]]++;
        }
        for(int j=0;j<t.length();j++){
            anagram_map[t[j]]--;
        }
        // unordered_map<char,int>::iterator itr;

        for(auto itr=anagram_map.begin();itr!=anagram_map.end();++itr){
            if(itr->second!=0){
                return false;
            }
        }
        return true;
    }
};
