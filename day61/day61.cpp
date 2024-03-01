class Solution {
public:
    bool halvesAreAlike(string s) {
        int left_vowel=0;
        int right_vowel=0;

        for(int i=0;i<(s.size()/2);i++){
            if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U'){
                left_vowel++;
            }
        }
        for(int i=(s.size()/2);i<s.size();i++){
            if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U'){
            right_vowel++;
            }
        }

        if(left_vowel==right_vowel){
            return true;
        }

        return false;
    }
};

// stack STL PRACTISE 

#include<bits/stdc++.h>

using namespace std;

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);

    cout<<st.top()<<endl;

    st.pop();
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;
    // st.emplace(600,30,40,50);

    
    cout<<st.size()<<endl;
    st.push(80);
    st.push(90);
    st.push(100);
    
    while(st.empty()==false){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}
