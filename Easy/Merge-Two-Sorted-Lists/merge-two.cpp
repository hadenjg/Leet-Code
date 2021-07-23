#include <iostream>
#include <list>

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


int main(){

    std::list<int> myList;
    ListNode* l1 = NULL;
    ListNode* f1 = NULL;
    ListNode* f2 = NULL;

    ListNode* l2 = NULL;
    ListNode* s1 = NULL;
    ListNode* s2 = NULL;

    l1 = new ListNode();
    f1 = new ListNode();
    f2 = new ListNode();

    l2 = new ListNode();
    s1 = new ListNode();
    s2 = new ListNode();

    l1->val = 1;
    l1->next = f1;

    f1->val = 2;
    f1->next = f2;

    f2->val = 4;
    f2->next = NULL;

    l2->val = 1;
    l2->next = s1;

    s1->val = 3;
    s1->next = s2;

    s2->val = 4;
    s2->next = NULL;

    ////////////////////////////////////////////////



    while(l1 != NULL) {
        std::cout << l1->val << " ";
        myList.push_back(l1->val);
        l1 = l1->next;
    }

    while(l2 != NULL){
        std::cout << l2->val << " ";
        myList.push_back(l2->val);
        l2 = l2->next;
    }

    myList.sort();

    std::list<int>::iterator it;
    
    for(it=myList.begin(); it != myList.end(); ++it)
    {
        std::cout << ' ' << *it;
        std::cout << std::endl;
    }

    return 0;
}
