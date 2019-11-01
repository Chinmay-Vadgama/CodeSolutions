#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    long long adder(long long a, long long b, ListNode *k, long long d)
    {
        long long tmp = a+b+d;
//        k = new ListNode(0);
        if(tmp>9)
        {   k->val = tmp%10;
            k->next = NULL;
//            cout << k->val << endl;
            return(tmp/10);
        }
        else
        {
            k->val = tmp;
            k->next = NULL;
            return(0);
        }
    }
    
    public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       // need order of O(n) solution here , 
        // iterate over both linkedlists and output summation one by one in another linkedlist
        ListNode *l3 = new ListNode(0);
        ListNode *l4 = l3;
        long long nextadd = 0;
        while(l1!=NULL || l2!=NULL)
        {
      /*      if(l1->next==NULL && l2->next==NULL)
            {
               if(nextadd != 0)
               {
                   l3->next = new ListNode(0);
                   l3 = l3->next;
                   l3->val = nextadd;
                   l3->next = NULL;
               }
               break;
            }
            else
            {
                //l3->next = new ListNode(0);
                //l3 = l3->next;
            }
      */    long long tmp1=0,tmp2=0;
            if(l1==NULL)
            {
                tmp1 = 0;
            }
            else
            {
                tmp1 = l1->val;
            }
            if(l2==NULL)
            {
                tmp2 = 0;
            }
            else
            {
                tmp2 = l2->val;
            }
//          cout << tmp1 << " " << tmp2 << " " << l3->val << " " << nextadd << endl; 
            nextadd = adder(tmp1,tmp2,l3,nextadd);
            if(l1!=NULL)
            {l1 = l1->next;}
            if(l2!=NULL)
            {l2 = l2->next;}
            if(l1==NULL && l2==NULL)
            {
               if(nextadd != 0)
               {
                   l3->next = new ListNode(0);
                   l3 = l3->next;
                   l3->val = nextadd;
                   l3->next = NULL;
               }
               break;
            }
            else
            {
                l3->next = new ListNode(0);
                l3 = l3->next;
            }
        }
        return l4;
    }
};