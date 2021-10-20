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
#include<bits/stdc++.h>
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* t=head,*x;
        vector<int>v;
        while(t!=NULL){v.push_back(t->val); t=t->next;}
        int n=v.size(),i;
        x=new ListNode(v[n/2]);
        t=x;
        for(i=n/2+1;i<n;i++){
            t->next=new ListNode(v[i]);
            t=t->next;}
        return x;
    }
