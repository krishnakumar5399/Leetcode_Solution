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
int getSize(ListNode* head){
    ListNode* temp = head ;
    int len = 0 ;
    while(temp != NULL){
        len++;
        temp = temp->next ;
    }
    return len ;

}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = getSize(head) ;
        // if LL has single element ;
        if(size == 1 && n == 1){
            delete head ;
            head = NULL; 
            return head ;
        }
        // remove head of linked list.
        if(n== size){
            ListNode* temp = head ;
            head = head->next ;
            temp ->next = NULL ;
            delete temp ;
            return head ;

        }
        // remove tail of linked list.
        if(n==1){
            ListNode* prev = NULL;
            ListNode* curr = head ;
            
            while( size != 1){
                size--;
                prev = curr ;
                curr = curr->next ;
            }
            prev->next =NULL ;
            delete curr;
            return head ;
        }
        // remove Node in between head and tail
        else{
             ListNode* prev = NULL;
            ListNode* curr = head ;
            int pos = size - n + 1 ;
            
            while( pos != 1){
                pos--;
                prev = curr ;
                curr = curr->next ;
            }
            ListNode* nextNode = curr->next ;
            prev->next = nextNode ;
            curr->next =NULL;
            delete curr;
            return head ;
        }
        return head ;
        
        
    }
};
