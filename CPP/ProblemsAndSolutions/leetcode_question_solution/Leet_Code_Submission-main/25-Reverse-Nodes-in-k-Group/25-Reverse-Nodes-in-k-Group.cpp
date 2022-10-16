/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        //base case
        if(head == NULL)
            return head;
        
        // step 1: reverse k nodes 
        ListNode* prev =NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        int count = 0,cnt2=0;
        while(curr != NULL && count < k)
        {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        ListNode* temp = curr;
        while(temp != NULL)
        {
            cnt2++;
            temp = temp -> next;
        }
        // step 3: recursion
        if(next != NULL && cnt2 >= k )
            head -> next = reverseKGroup(next, k);
        else
        {
            head -> next = next;
        }
        return prev;    
    }
};