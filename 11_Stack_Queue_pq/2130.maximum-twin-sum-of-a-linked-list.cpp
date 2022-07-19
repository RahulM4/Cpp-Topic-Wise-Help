/*
 * @lc app=leetcode id=2130 lang=cpp
 *
 * [2130] Maximum Twin Sum of a Linked List
 */

// @lc code=start
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

    //length of the linked list
    // int length(ListNode* head) {
    //     int len = 0;
    //     while (head) {
    //         len++;
    //         head = head->next;
    //     }
    //     return len;
    // }
    // // reverse the linked list of half length
    // ListNode* reverse(ListNode* head, int len) {
    //     ListNode* prev = nullptr;
    //     ListNode* cur = head;
    //     ListNode* next = nullptr;
    //     while (len--) {
    //         next = cur->next;
    //         cur->next = prev;
    //         prev = cur;
    //         cur = next;
    //     }
    //     return prev;
    // }
    
    // int pairSum(ListNode* head) {
    //     int n= length(head);
    //     int twinSum = 0;

    //     ListNode * second = reverse(head, n/2);
    //     ListNode * first = head;
    //     while (first && second) {
    //         twinSum += first->val + second->val;
    //         first = first->next;
    //         second = second->next;
    //     }
    //     return twinSum;

        // vector<int> v;
        // while (head) {
        //     v.push_back(head->val);
        //     head = head->next;
        // }

        // for(int i=0; i<n; i++)
        // {
        //     twinSum = max(twinSum, v[i]+v[n-1-i]);
        // }
        // return twinSum;
        
    //}

     
    //solve using two pointers


         int pairSum(ListNode* head){
      ListNode* a = head,* b = head,* p = NULL;
        while (b != NULL) {
            b = b->next->next;
            ListNode *n = a->next;
            a->next = p;
            p = a;
            a = n;
        }
        int ans = INT_MIN;
        while (a != NULL) {
            ans = max(ans, a->val + p->val);
            a = a->next;
            /* Reverse back if needed here just like in the previous loop */
            p = p->next;
        }
      return ans;
        
    }


};



// @lc code=end

