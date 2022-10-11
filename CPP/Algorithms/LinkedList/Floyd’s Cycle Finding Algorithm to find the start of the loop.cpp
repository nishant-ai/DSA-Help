#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

ListNode *detectCycle(ListNode *head) {
    ListNode *slow = head, *fast = head;
    while(fast and fast->next) {
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast) break;
    }
    if(!fast or !fast->next) return NULL;
    fast = head;
    while(slow != fast) {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

int main() {
    ListNode *head = new ListNode(3), *temp = head;
    temp->next = new ListNode(1);
    temp = temp->next;
    ListNode *cyclePoint = temp;
    temp->next = new ListNode(-1);
    temp = temp->next;
    temp->next = new ListNode(-10);
    temp = temp->next;
    temp->next = cyclePoint;

    ListNode *cycle = detectCycle(head);
    cout<<cycle->val;
    cout<<endl;
    return 0;
}