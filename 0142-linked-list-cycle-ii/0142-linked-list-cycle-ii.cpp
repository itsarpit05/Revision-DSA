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
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        ListNode* s = head;
        ListNode* f = head;
        int flag=0;
        while(f!=nullptr && f->next!=nullptr){
            s=s->next;
            f=f->next->next;
            if(s==f){
                flag=1;
                break;
                
            }
        }
        if(flag==0){
            return nullptr;
        }
        s=head;
        while(s!=f){
            s=s->next;
            f=f->next;
        }
        return s;

    }
};