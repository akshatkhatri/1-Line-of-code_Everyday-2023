class Solution {
public:
    string replaceDigits(string s) {
        for(int i = 1 ; i < s.length(); i++){
            if(isdigit(s[i])){
                s[i] = s[i-1] + (s[i] - '0') ;
            }
        }
        return s;
    }
};

// second LC

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        while(n%2==0) n/=2;
        return n==1;
    }
};
