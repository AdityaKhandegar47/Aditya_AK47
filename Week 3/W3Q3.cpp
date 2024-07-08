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
        //base case 
        if(head == NULL || head -> next == NULL) return head;

        ListNode* miniHead = reverseLL(head-> next);
        head -> next -> next = head;
        head -> next = NULL;

        return miniHead;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* revHead = reverseLL(head);
        ListNode* temp = revHead;
        if(n == 1){
            ListNode* nodeToDelete = revHead;
            revHead = revHead -> next;
            nodeToDelete -> next = NULL;
            delete nodeToDelete;
        }
        else{
            int cnt = 1;
            while(cnt < n-1){
                temp = temp -> next;
                cnt++;
            }
            ListNode* nodeToDelete = temp -> next;
            temp -> next = temp -> next -> next;
            nodeToDelete -> next = NULL;
            delete nodeToDelete;

        }
        ListNode* finalNode = reverseLL(revHead);
        return finalNode;

    }
};