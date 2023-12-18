/*
Problem Overview:

The Backspace String Compare algorithm addresses the challenge of comparing two strings after applying a set of backspace rules. The backspace character '#' acts as an eraser, removing the character preceding it in the string. The goal is to determine whether two strings are equivalent after applying these rules.
  */
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int>s_stack;
        stack<int>t_stack;
        int n=s.length();
        int m=t.length();

        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                if(!s_stack.empty()){
                s_stack.pop();
                }
            }
            else{
                s_stack.push(s[i]);
            }
        }
        for(int i=0;i<m;i++){
            if(t[i]=='#'){
                if(!t_stack.empty()){
                t_stack.pop();
                }
            }
            else{
                t_stack.push(t[i]);
            }
        }

        if(s_stack.size()!=t_stack.size()){
            return false;
        }

        while(!s_stack.empty()){
            if(s_stack.top()!=t_stack.top()){
                return false;
            }
            s_stack.pop();
            t_stack.pop();
        }
        return true;
        
    }
};

/*
Key Insights:

1. Utilization of Stacks:

The algorithm leverages stacks to manage the impact of backspace rules efficiently. By employing two stacks, one for each string, the algorithm navigates through the strings while considering the removal of characters indicated by the backspace symbol.

    For each character in the strings, the algorithm pushes non-backspace characters onto the respective stacks.
    When a backspace character is encountered, the algorithm pops elements from the stack, simulating the removal of the preceding character.

2. Size Comparison for Equality:

After processing the characters and populating the stacks, the algorithm performs a crucial step by comparing the sizes of the two stacks.

    If the sizes differ, it is a quick indication that the strings cannot be equivalent.
    This step serves as an initial filter, avoiding unnecessary character-by-character comparisons in cases where the lengths are different.

3. Character Comparison:

With equal-sized stacks, the algorithm proceeds to a meticulous character-by-character comparison.

    The algorithm pops elements from both stacks and checks for equality.
    If, at any point, the characters differ, the algorithm concludes that the strings are not equivalent and returns false.

Conclusion:

The Backspace String Compare algorithm, with its intelligent use of stacks and size comparisons, provides an elegant solution to the problem of string equality after applying backspace rules. By understanding the underlying logic, developers can appreciate the efficiency and reliability of this algorithm and apply similar strategies to related challenges in string manipulation.

This walkthrough highlights the importance of leveraging fundamental data structures like stacks and employing strategic comparisons to optimize algorithms in the realm of string processing.
  */
