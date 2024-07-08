/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 #include <map>
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL){
            return NULL;
        }
        ListNode* temp = headA;
        map<ListNode*,bool> visited;
        while(temp != NULL){
            visited[temp] = true;
            temp = temp -> next;
        }
        temp = headB;
        while(temp != NULL){
            if(visited[temp] == true){
                return temp;
            }
            temp = temp -> next;
        }
    return NULL;
        
    }
};