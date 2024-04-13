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
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL ;
        ListNode* curr = head ;
        while(curr != NULL){
            ListNode* nextNode = curr->next ;
            curr->next = prev ;
            prev = curr ;
            curr = nextNode ;
        }
        return prev ;
    }
    bool compare(ListNode* head, ListNode* head2){
        while(head != NULL && head2 != NULL){
            if(head->val != head2->val){
                return false ;
            }
            else{
                head = head->next ;
                head2 = head2->next ;
            }
        }
        return true ;
    }
    bool isPalindrome(ListNode* head) {
        // step 1 : break into two part
        //step 2: reverse second half
        // compare both part

        // tortoise algorithm
        ListNode* slow = head ;
        ListNode* fast = head ;
        while(fast->next != NULL){
            fast = fast->next ;
            if(fast->next != NULL){
                fast = fast->next ;
                slow = slow->next ;
            }
        }
        ListNode* secondHead = slow->next ;
        slow->next = NULL ;
        // reverse second half
        ListNode* head2 = reverse(secondHead) ;
        return compare(head,head2) ;

        
    }
};
