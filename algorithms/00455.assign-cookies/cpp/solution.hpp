#include <algorithm>
#include <stack>
#include <utility>

using namespace std;

class Solution {
 public:
  int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    size_t child_index = 0;
    size_t cookie_index = 0;
    while (child_index < g.size() && cookie_index < s.size()) {
      if (g[child_index] <= s[cookie_index]) {
        ++child_index;
        ++cookie_index;
      } else {
        ++cookie_index;
      }
    }
    return child_index;
  }
};