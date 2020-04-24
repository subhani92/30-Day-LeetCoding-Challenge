/*
Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND of all numbers in this range, inclusive.

Example 1:

Input: [5,7]
Output: 4

Example 2:

Input: [0,1]
Output: 0*/

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        
        //please refer this link for explanation 
        //https://math.stackexchange.com/questions/1073532/how-to-find-bitwise-and-of-all-numbers-for-a-given-range
        while(m<n){
            n -= (n&-n);
        }
        return n;
    }
};
