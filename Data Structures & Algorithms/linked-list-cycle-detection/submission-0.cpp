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
    bool hasCycle(ListNode* head) {
        if(head == NULL)
            return false;
        
        unordered_map<ListNode*, bool>visited;

        ListNode* temp = head;

        while(temp != NULL){
            if(visited[temp] == true)
                return true;
            
            visited[temp] = true;

            temp = temp->next;
        }
        return false;
    }
};
