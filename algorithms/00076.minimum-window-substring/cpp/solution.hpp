#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
 public:
  string minWindow(string s, string t) {
    for (auto c : t) {
      ++target_char_2_pending_count_[c];
    }

    int min_left_index = 0;
    int min_size = s.size() + 1;
    int conver_count = 0;
    for (int left_index = 0, right_index = 0; right_index < s.size();
         ++right_index) {
      char c = s[right_index];
      auto it = target_char_2_pending_count_.find(c);
      if (it != target_char_2_pending_count_.end()) {
        if (--it->second >= 0) {
          ++conver_count;
        }

        while (conver_count == t.size()) {
          c = s[left_index];
          it = target_char_2_pending_count_.find(c);
          if (it != target_char_2_pending_count_.end()) {
            if (++it->second > 0) {
              --conver_count;
              int size = right_index - left_index + 1;
              if (min_size > size) {
                min_left_index = left_index;
                min_size = size;
              }
            }
          }
          ++left_index;
        }
      }
    }

    return min_size > s.size() ? "" : s.substr(min_left_index, min_size);
  }

 private:
  unordered_map<char, int> target_char_2_pending_count_;
};