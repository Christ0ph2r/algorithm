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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* result_node;
        if(list1 == NULL && list2 == NULL)
            return result_node;
        
        if(list1 == NULL)
            return list2;
        
        if(list2 == NULL)
            return list1;
        
        
        if(list1->val > list2->val){
            result_node = new ListNode(list2->val);
            list2 = list2->next;
        }else{
            result_node = new ListNode(list1->val);
            list1 = list1->next;
        }
        ListNode* head_node = result_node;
        
        while(true){
            if(list1 == NULL || list2 == NULL)
                break;
            ListNode* tmp_node;
            
            if(list1->val > list2->val){
                tmp_node = new ListNode(list2->val);
                result_node->next = tmp_node;
                result_node = result_node->next;
                list2 = list2->next;
            }else{
                tmp_node = new ListNode(list1->val);
                result_node->next = tmp_node;
                result_node = result_node->next;
                list1 = list1->next;
            }
            
            
        }
        
        if(list1 == NULL){
            result_node->next = list2;
        }else{
            result_node->next = list1;
        }
        
        
        return head_node;
        
    }
};