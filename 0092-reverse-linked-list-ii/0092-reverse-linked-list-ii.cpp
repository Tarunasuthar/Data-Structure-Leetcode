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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> vec;
        ListNode* temp = head;
        int i=1;
        while(temp!=NULL){
           if(i>=left && i<=right){
            vec.push_back(temp->val);
           }
           temp = temp->next;
           i++;
        }
        reverse(vec.begin(),vec.end());
        temp = head;
        i = 1;
        int j=0;
        while(temp!=NULL){
            if(i>=left && i<=right){
                temp->val = vec[j];
                j++;
            }
            i++;
            temp = temp->next;
        }
        return head;
    }
};