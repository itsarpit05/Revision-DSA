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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode*temp =head;
        while(temp!=nullptr){
            cnt++;
            temp = temp->next;
        }
        int l =cnt-n;
        if(l==0){
            ListNode* newHead = head->next;
            return newHead;
            delete head;
        }
       

        temp = head;
        ListNode* prev = nullptr;
        while(temp!=nullptr && l>0){
            prev = temp;
            temp=temp->next;
            l--;
        }
        if(temp->next==nullptr){
           prev->next = nullptr;
           delete temp;

        }
        else{
            prev->next = temp->next;
            temp->next=nullptr;
            delete temp;
        }
        return head;
    }
};