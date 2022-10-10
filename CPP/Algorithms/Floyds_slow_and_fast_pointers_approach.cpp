//THIS ALGO USED TO FIND MID OF LINKEDLIST AND TO DETECT LOOP IN LINKEDLIST AND MANY MORE....

// CODE TO FIND MID IN LINKED LIST:-

ListNode* middleNode(ListNode* head) 
{
        ListNode *slow = head;
        ListNode *fast = head;
  
        while( fast != NULL && fast->next != NULL )
        {
            slow = slow->next;
            fast = fast->next->next;
        }
  
        return slow;
}
