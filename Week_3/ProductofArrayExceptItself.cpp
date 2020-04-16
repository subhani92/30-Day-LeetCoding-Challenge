/*Given an array nums of n integers where n > 1,  return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

Example:

Input:  [1,2,3,4]
Output: [24,12,8,6]

Constraint: It's guaranteed that the product of the elements of any prefix or suffix of the array (including the whole array) fits in a 32 bit integer.

Note: Please solve it without division and in O(n).

Follow up:
Could you solve it with constant space complexity? (The output array does not count as extra space for the purpose of space complexity analysis.)

*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
  
        //map<int, int> mp;
        int n = nums.size();
        vector<int  > v(n, 1);
        
         if(n==1)
         return v;
         
        int temp1 =1 ;
        
        for(int i=0;i<n;i++){
            v[i] = temp1;
            
            temp1 *=nums[i];
            cout<<v[i]<<" ";
        }
        
        temp1 =1;
        for(int j=n-1;j>=0;j--){
            v[j] *= temp1;
            temp1 *= nums[j];
            //cout<<v[j]<<" ";
        }
        
        /*int pref[n];
        int suff[n];
       
        pref[0]=1;
        suff[n-1]=1;
        
        for(int i=1;i<n;i++)
            pref[i] = pref[i-1]*nums[i-1];
        
        for(int i=n-2;i>=0;i--)
            suff[i] = suff[i+1]*nums[i+1];
        
        for(int i=0;i<n;i++){
            v.push_back(pref[i]*suff[i]);
            //cout<<v[i]<<" ";
        }*/
        return v;

    }
};
