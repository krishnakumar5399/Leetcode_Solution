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
    ListNode* reverse(ListNode* prev , ListNode* curr){
        // base case 
        if(curr == NULL){
            return prev ;
        }
        // processing
        ListNode* nextNode = curr->next ;
        curr->next = prev ;
        prev = curr ;
        curr = nextNode ;

        // recursive call
        ListNode* recursionKaAns = reverse(prev,curr) ;
        return recursionKaAns ;

    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL ;
        ListNode* curr = head ;
        // while(curr != NULL){
        //     ListNode* nextNode = curr->next ;
        //     curr-> next = prev ;
        //     prev = curr ;
        //     curr = nextNode ;

        // }
        // return prev;
       return reverse(prev,curr) ;
        
    }
};
