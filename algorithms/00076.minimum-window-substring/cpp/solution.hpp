#include <string>
#include <unordered_map>

using namespace std;

class Solution {
 public:
  string minWindow(string s, string t) {
    for (auto c : t) {
      ++targe_char_2_count_[c];
      source_char_2_count_.emplace(c, 0);
    }

    int result_left_index = 0;
    int result_right_index = 0;
    int left_index = 0;
    int right_index = 0;
    do {
      for (; right_index < s.size(); ++right_index) {
        const char c = s[right_index];
        if (targe_char_2_count_.find(c) != targe_char_2_count_.end()) {
          ++source_char_2_count_[c];
          if (isCovered()) {
            break;
          }
        }
      }
      if (right_index >= s.size()) {
        break;
      }
      ++right_index;

      do {
        const char c = s[left_index];
        if (targe_char_2_count_.find(c) != targe_char_2_count_.end()) {
          int& source_char_count = source_char_2_count_[c];
          if (source_char_count - 1 < targe_char_2_count_[c]) {
            break;
          }
          --source_char_count;
        }
        ++left_index;
      } while (true);

      if (result_left_index == result_right_index ||
          (right_index - left_index) <
              (result_right_index - result_left_index)) {
        result_left_index = left_index;
        result_right_index = right_index;
      }

      if (right_index < s.size()) {
        --source_char_2_count_[s[left_index]];
        ++left_index;
      }
    } while (true);
    return s.substr(result_left_index,
                    result_right_index - result_left_index);
  }

 private:
  bool isCovered() {
    for (auto kv : targe_char_2_count_) {
      if (kv.second > source_char_2_count_[kv.first]) {
        return false;
      }
    }
    return true;
  }

  unordered_map<char, int> source_char_2_count_;
  unordered_map<char, int> targe_char_2_count_;
};