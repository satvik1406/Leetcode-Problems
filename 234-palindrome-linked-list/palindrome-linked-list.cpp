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
    ListNode* EndOfFirstHalf(ListNode* head){
        int count = 0;
        ListNode* temp = head;

        while(temp->next){
            temp = temp->next;
            count++;
        }

        count /= 2;
        temp = head;
        while(count--){
            head = head->next;
        }

        return temp;
    }

    ListNode* StartOfReverse(ListNode* root){
        ListNode* prev = NULL;
        ListNode* curr = root;

        while(root->next){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        curr->next = prev;

        return prev;
    }

    bool isPalindrome(ListNode* head) {
        stack<int> st;
        int count = 0;
        ListNode* temp = head;

        while(temp){
            st.push(temp->val);
            count++;
            temp = temp->next;
        }

        count /= 2;
        temp = head;

        while(count--){
            if(st.top() != temp->val) return false;
            st.pop();
            temp = temp->next;
        }

        return true;
    }
};