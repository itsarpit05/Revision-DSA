/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        if(head==NULL || head->next==NULL) return true;
        stack<int>st;
        Node* temp = head;
        while(temp!=NULL){
            st.push(temp->data);
            temp=temp->next;
        }
        temp = head;
        while(temp!=NULL){
            if(st.top()!=temp->data){
                return false;
            }
            st.pop();
            temp=temp->next;
        }
        return true;
    }
};