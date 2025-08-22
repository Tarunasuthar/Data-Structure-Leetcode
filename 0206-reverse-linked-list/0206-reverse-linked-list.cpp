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
    ListNode* reverseList(ListNode* head) {
        vector<int> vec;
        ListNode* temp = head;
        while(temp!=NULL){
            vec.push_back(temp->val);
            temp = temp->next;
        }
        reverse(vec.begin(),vec.end());
        temp = head;
        int j=0;
        while(temp!=NULL){
         temp->val = vec[j];
         temp = temp->next;
         j++;
        }
        return head;
    }
};