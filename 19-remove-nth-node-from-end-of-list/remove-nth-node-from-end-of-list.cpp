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
    // int lengthlinkedlist(ListNode* head){
    //     int s=0;
    //     while(head){
    //         s++;
    //         head=head->next;
    //     }
    //     return s;
    // }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // int length= lengthlinkedlist(head);
        // if(length==n){
        //     ListNode*temp=head->next;
        //     delete(head);
        //     return temp;
        // }
        // ListNode*temp=head;
        // ListNode*prev=NULL;
        // int traversal= length-n;
        // while(traversal--){
        //     prev=temp;
        //     temp=temp->next;
        // }
        // prev->next=temp->next;
        // delete temp;
        // return head;
        ListNode*temp=head;
        for(int i=0;i<n;i++){
            temp=temp->next;
        }
        if(temp==NULL){
            ListNode*temp=head->next;
            delete head;
            return temp;
        }
        ListNode*prev=head;
        while(temp!=NULL && temp->next!=NULL){
            prev=prev->next;
            temp=temp->next;
        }
        prev->next=prev->next->next;
        return head;
    }
};