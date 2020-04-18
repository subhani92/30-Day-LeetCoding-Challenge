/*
 Given a string containing only three types of characters: '(', ')' and '*', write a function to check whether this string is valid. We define the validity of a string by these rules:

    Any left parenthesis '(' must have a corresponding right parenthesis ')'.
    Any right parenthesis ')' must have a corresponding left parenthesis '('.
    Left parenthesis '(' must go before the corresponding right parenthesis ')'.
    '*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string.
    An empty string is also valid.

Example 1:

Input: "()"
Output: True

Example 2:

Input: "(*)"
Output: True

Example 3:

Input: "(*))"
Output: True

Note:

    The string size will be in the range [1, 100].
*/
class Solution {
public:
    bool checkValidString(string s) {
        
        
        stack<int > stk1,stk2;
        int l = s.length();
        for(int i=0;i<l;i++){
           
            if(s[i]==')'){
                if(!stk1.empty()) stk1.pop();
                else if(!stk2.empty()) stk2.pop();
                else
                    return false;
             }
            else if(s[i] == '(')
                stk1.push(i);
            else
                stk2.push(i);
        }
        
        while((!stk1.empty()) && (!stk2.empty())){
            
            if(stk1.top() > stk2.top())
                return false;
            stk1.pop();
            stk2.pop();
        }
        
        return stk1.empty();
    }
};
