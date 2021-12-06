#define CATCH_CONFIG_MAIN
#include <utility>
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

pair<ListNode*, ListNode*> buildList(vector<int> v, int pos) {
  ListNode* cycle_begin = nullptr;
  ListNode* head = new ListNode(0);
  ListNode* tail = head;
  for (int i = 0; i < v.size(); ++i) {
    ListNode* node = new ListNode(v[i]);
    tail->next = node;
    tail = node;
    if (i == pos) {
      cycle_begin = node;
    }
  }
  if (cycle_begin != nullptr && tail != nullptr) {
    tail->next = cycle_begin;
  }
  return make_pair(head, cycle_begin);
}

TEST_CASE("test1") {
  Solution solution;
  pair<ListNode*, ListNode*> head_and_cycle_begin = buildList({3, 2, 0, -4}, 1);
  CHECK(solution.detectCycle(head_and_cycle_begin.first) ==
        head_and_cycle_begin.second);
}

TEST_CASE("test2") {
  Solution solution;
  pair<ListNode*, ListNode*> head_and_cycle_begin = buildList({1, 2}, 0);
  CHECK(solution.detectCycle(head_and_cycle_begin.first) ==
        head_and_cycle_begin.second);
}

TEST_CASE("test3") {
  Solution solution;
  pair<ListNode*, ListNode*> head_and_cycle_begin = buildList({1}, -1);
  CHECK(solution.detectCycle(head_and_cycle_begin.first) ==
        head_and_cycle_begin.second);
}