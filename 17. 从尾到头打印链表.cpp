#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution 
{
public:
    vector<int> printListReversingly(ListNode* head) 
    {
        vector<int> res;

        while(head){
            res.insert(res.begin(),head->val);
            head=head->next;
        }
        return  res;
    }
};