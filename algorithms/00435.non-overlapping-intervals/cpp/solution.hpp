#include <algorithm>
#include <stack>
#include <utility>

using namespace std;

class Solution {
 public:
  int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(),
         [](const vector<int>& v1, const vector<int>& v2) {
           return v1[1] < v2[1];
         });
    int remove_num = 0;
    size_t current_index = 0;
    size_t next_index = 1;
    while (current_index < intervals.size() && next_index < intervals.size()) {
      const vector<int>& current_interval = intervals[current_index];
      const vector<int>& next_interval = intervals[next_index];
      if (next_interval[0] < current_interval[1]) {
        ++remove_num;
      } else {
        current_index = next_index;
      }
      ++next_index;
    }
    return remove_num;
  }
};