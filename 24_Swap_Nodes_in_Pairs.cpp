// link to the problem ---> https://leetcode.com/problems/swap-nodes-in-pairs/description/

class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        ListNode *temp = (ListNode *)malloc(sizeof(ListNode)); // dummy node
        temp->next = head;

        ListNode *ptr = temp, *swap1, *swap2; // pointers

        while (ptr->next && ptr->next->next)
        { // atleast 2 nodes shold be present for swapping

            swap1 = ptr->next;       // node1
            swap2 = ptr->next->next; // node2

            swap1->next = swap2->next; // swapping nodes link just like variables
            swap2->next = swap1;

            ptr->next = swap2; // updation of ptr's next
            ptr = swap1;       // updation of ptr
        }
        return temp->next;
    }
};