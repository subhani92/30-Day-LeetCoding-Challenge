/*
Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.

Your algorithm's runtime complexity must be in the order of O(log n).

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
*/
class Solution {
    
public:
    int search(vector<int>& a, int target) {
        
       
        
        
        int low = 0;
        int high = a.size() - 1;

        while (low <= high) {  //binery search
            int mid = (low + high) / 2;
            if (target == a[mid])
                return mid;
		   
            else if (a[low] <= a[mid])

                if (target >= a[low] && target <= a[mid]) {
                    high = mid - 1;
                } else
                    low = mid + 1;
            else {
                if (target >= a[mid] && target<= a[high]) {
                    low = mid + 1;
                } else
                    high = mid - 1;
            }
        }
        return -1;
    }
    
};
