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
    bool isPalindrome(ListNode *head) {
      if (!head || !head->next)
        return true;

      ListNode *fast = head, *slow = head;

      while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
      }

      ListNode *reversed = reverseList(slow);

      while (reversed != nullptr) {
        if (head->val != reversed->val)
          return false;

        head = head->next;
        reversed = reversed->next;
      }

      return true;
    }

  private:
    ListNode* reverseList(ListNode* head) {
      ListNode *current = head, *previous = nullptr, *follow;

      while (current != nullptr) {
        follow = current->next;
        current->next = previous;
        previous = current;
        current = follow;
      }

      return previous;
    }
};
