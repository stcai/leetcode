
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
 public:
  ListNode *detectCycle(ListNode *head) {
    ListNode *fast = head;
    ListNode *slow = head;
    do {
      if (fast == nullptr || fast->next == nullptr) {
        return nullptr;
      }
      fast = fast->next->next;
      slow = slow->next;
    } while (slow != fast);
    
    fast = head;
    while (fast != slow) {
      fast = fast->next;
      slow = slow->next;
    }
    return fast;
  }
};