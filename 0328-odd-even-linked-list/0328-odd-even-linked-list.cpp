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
    ListNode* oddEvenList(ListNode* head) {
        vector<int>odd;
        vector<int>even;
        int ind = 1;
        ListNode* temp = head;
        while(temp!=nullptr){
            if(ind%2==1){
                odd.push_back(temp->val);
            }
            else{
                even.push_back(temp->val);
            }
            ind++;
            temp = temp->next;
        }
        vector<int>res;
        for(int i=0;i<odd.size();i++){
            res.push_back(odd[i]);
        }
        for(int i=0;i<even.size();i++){
            res.push_back(even[i]);
        }
        temp = head;
        for(int i=0;i<res.size();i++){
            temp->val = res[i];
            temp = temp->next;
        }
        return head;

    }
};