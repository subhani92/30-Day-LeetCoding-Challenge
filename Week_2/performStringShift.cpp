/*
Perform String Shifts

You are given a string s containing lowercase English letters, and a matrix shift, where shift[i] = [direction, amount]:

    direction can be 0 (for left shift) or 1 (for right shift). 
    amount is the amount by which string s is to be shifted.
    A left shift by 1 means remove the first character of s and append it to the end.
    Similarly, a right shift by 1 means remove the last character of s and add it to the beginning.

Return the final string after all operations.

Example 1:

Input: s = "abc", shift = [[0,1],[1,2]]
Output: "cab"
Explanation: 
[0,1] means shift to left by 1. "abc" -> "bca"
[1,2] means shift to right by 2. "bca" -> "cab"

Example 2:

Input: s = "abcdefg", shift = [[1,1],[1,1],[0,2],[1,3]]
Output: "efgabcd"
Explanation:  
[1,1] means shift to right by 1. "abcdefg" -> "gabcdef"
[1,1] means shift to right by 1. "gabcdef" -> "fgabcde"
[0,2] means shift to left by 2. "fgabcde" -> "abcdefg"
[1,3] means shift to right by 3. "abcdefg" -> "efgabcd"
*/

class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        
        
        if(s.length()<=1)
            return s;
        string res ="";
        int left_shift=0;
        int right_shift=0;
        
        for(vector<int > v : shift){
            if(v[0]==0)
                left_shift += v[1];
            else
                right_shift += v[1];
        }
        
        if(left_shift>right_shift){
            
            left_shift -= right_shift;
            left_shift %= s.length();
            res += s.substr(left_shift, s.length()-left_shift);
            res += s.substr(0,left_shift);
        }
        else{
            right_shift -= left_shift;
            right_shift %= s.length();
            res += s.substr(s.length()-right_shift, right_shift);
            res += s.substr(0,s.length()-right_shift);
        }
        
        
        return res;
        
    }
};

