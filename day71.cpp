class Solution {
public:
    bool isValid(string s) {
        stack<char>my_stack;

        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                my_stack.push(s[i]);
            }
            else{
                if(my_stack.empty()){
                return false;
                }
            char top=my_stack.top();
            if((s[i]==')' && top=='(') || (s[i]=='}' && top=='{') || (s[i]==']' && top=='[')){
                my_stack.pop();
                }
            else{
                return false;
                }
            }

            
        }
        return my_stack.empty();
    }
};

