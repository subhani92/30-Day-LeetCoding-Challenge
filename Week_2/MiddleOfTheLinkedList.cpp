/*Given a non-empty, singly linked list with head node head, return a middle node of linked list.

If there are two middle nodes, return the second middle node.

 

Example 1:

Input: [1,2,3,4,5]
Output: Node 3 from this list (Serialization: [3,4,5])
The returned node has value 3.  (The judge's serialization of this node is [3,4,5]).
Note that we returned a ListNode object ans, such that:
ans.val = 3, ans.next.val = 4, ans.next.next.val = 5, and ans.next.next.next = NULL.

Example 2:

Input: [1,2,3,4,5,6]
Output: Node 4 from this list (Serialization: [4,5,6])
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        
      //this is first approach
      /* ListNode*  ans;
       ans = head;
        int  len=1;
        while(ans->next!=NULL){
            ans = ans->next;
            len++;
        }
        //delete(temp);
        //temp = head;
        //ListNode* ans;
        ans = head;
        int i=0;
        if(len&1){
            while(ans->next!=NULL&&i!=len/2){
            ans = ans->next;
                i++;
           }
        }
        else{
            while(ans->next!=NULL &&i!=len/2){
            ans = ans->next;
                i++;
           }
        }
        return ans;*/
      
	//you can try standered approcah using two pointer 
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
    
