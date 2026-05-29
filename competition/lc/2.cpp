#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void traverse(ListNode* L) {

}

void deleteList(ListNode* head) {
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {


    return new ListNode();
}

int main() {
// M list: 2 -> 4 -> 3
    ListNode* M_0 = new ListNode(2);
    ListNode* M_1 = new ListNode(4);
    ListNode* M_2 = new ListNode(3);

    M_0->next = M_1;
    M_1->next = M_2;

    // N list: 5 -> 6 -> 4
    ListNode* N_0 = new ListNode(5);
    ListNode* N_1 = new ListNode(6);
    ListNode* N_2 = new ListNode(4);

    N_0->next = N_1;
    N_1->next = N_2;

    ListNode* demo = addTwoNumbers(M_0, N_0);
    traverse(demo);

    deleteList(demo);
    deleteList(M_0);
    deleteList(N_0);

    return 0;
}













