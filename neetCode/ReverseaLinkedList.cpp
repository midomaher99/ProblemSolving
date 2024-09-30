struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *my_head = head;
        ListNode *curr = nullptr;
        ListNode *next = nullptr;
        while (my_head != nullptr)
        {
            curr = new ListNode(my_head->val, next);
            next = curr;
            my_head = my_head->next;
        }
        return curr;
    }
};