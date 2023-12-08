class Solution {
public:
    string removeOuterParentheses(string s) {
        int opened = 0;
        string str;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (opened > 0) {
                    str.push_back('(');
                }
                opened++;
            }

            if (opened > 0 && s[i] == ')') {
                if (opened > 1) {
                    str.push_back(')');
                }
                opened--;
            }
        }
        return str;
    }
};
