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
    int btoi(string s){
        int i=0;
        int size=s.size();
        int number=0;
        for(int j=size-1;j>=0;j--){
           number += s[j]*pow(2,i);
           i++;
        }
        return number;
    }
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        string s;
        while(temp!=NULL){
            s += temp->val;
            temp = temp->next;
        }
        return btoi(s);

    }
};