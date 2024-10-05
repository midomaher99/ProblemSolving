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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *iterator1 = list1;
        ListNode *iterator2 = list2;
        ListNode *result = new ListNode();
        ListNode *result_iterator = result;
        while (!(iterator1 == nullptr && iterator2 == nullptr))
        {
            result_iterator->next = new ListNode();
            result_iterator = result_iterator->next;
            if (iterator1 == nullptr)
            {
                result_iterator->val = iterator2->val;
                iterator2 = iterator2->next;
            }
            else if (iterator2 == nullptr)
            {
                result_iterator->val = iterator1->val;
                iterator1 = iterator1->next;
            }
            else
            {
                if (iterator1->val < iterator2->val)
                {
                    result_iterator->val = iterator1->val;
                    iterator1 = iterator1->next;
                }
                else
                {
                    result_iterator->val = iterator2->val;
                    iterator2 = iterator2->next;
                }
            }
        }
        // because result is dummy node
        return result->next;
    }
};
