#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if (!l1 && !l2) return NULL;
        if (!l1 || !l2) {
            if (l1) return l1;
            else return l2;
        }

        if (l1->val > l2->val) swap(l1, l2);

        ListNode *temp = l1;
        while (l2) {
            int vl = l2->val;
            while (temp->next && temp->next->val < vl)
                temp = temp->next;

            ListNode *ptr = temp->next;
            temp->next = l2;
            l2 = l2->next;
            temp->next->next = ptr;

        }

        return l1;

    }
};

