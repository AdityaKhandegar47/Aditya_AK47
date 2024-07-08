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
private:
ListNode* reverseLL(ListNode* head){
    if(head == NULL || head -> next == NULL){
        return head;
    }  
    ListNode* miniHead = reverseLL(head -> next);
    head -> next -> next = head;
    head -> next = NULL;
    return miniHead;
}
void append(ListNode* &head,ListNode* &tail,int d){
    ListNode* temp = new ListNode(d);
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    else{
        tail -> next = temp;
        tail = temp;
    }
   
}


public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverseLL(l1);
        l2 = reverseLL(l2);
        
        int carry = 0;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* answerHead = NULL;
        ListNode* answerTail = NULL;
        
        while(temp1 != NULL || temp2 != NULL || carry != 0){
            int val1  = 0;
            if(temp1 != NULL) val1  = temp1 -> val;
            int val2  = 0;
            if(temp2 != NULL) val2  = temp2 -> val;
            int sum = val1 + val2 + carry;
            int digit = sum %10;
            append(answerHead,answerTail,digit);
            carry = sum/10;
            if(temp1 != NULL) temp1 = temp1 -> next;
            if(temp2 != NULL) temp2 = temp2 -> next;
        }    

    //return reverseLL(answerHead);
    return answerHead;


    }
};