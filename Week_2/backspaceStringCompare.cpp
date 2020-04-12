/*
Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.

Example 1:

Input: S = "ab#c", T = "ad#c"
Output: true
Explanation: Both S and T become "ac".

Example 2:

Input: S = "ab##", T = "c#d#"
Output: true
Explanation: Both S and T become "".

Example 3:

Input: S = "a##c", T = "#a#c"
Output: true
Explanation: Both S and T become "c".

Example 4:

Input: S = "a#c", T = "b"
Output: false
Explanation: S becomes "c" while T becomes "b".

Note:

    1 <= S.length <= 200
    1 <= T.length <= 200
    S and T only contain lowercase letters and '#' characters.

Follow up:

    Can you solve it in O(N) time and O(1) space?
*/

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        
        
        for(int i=0;i<S.length();i++){
            if(S[i]=='#'&&i>0){
                 S.erase(i-1,2);
                i = i-2;
            } 
            else if(S[0]=='#' ){
                S.erase(i,1);
                i=i-1;
            }
                
        }
        for(int i=0;i<T.length();i++){
            if(T[i]=='#'&&i>0){
                 T.erase(i-1,2);
                i=i-2;
            }
            else if(T[0]=='#' )
            {
                T.erase(i,1);
                i=i-1;
            }
                
        }
        //cout<<S<<" "<<T<<" ";
        if(S==T)
            return true;
        return false;
    }
};
