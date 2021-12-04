#include <algorithm>
#include <stack>
#include <utility>

using namespace std;

class Solution {
 public:
  int candy(vector<int>& ratings) {
    vector<int> candy(ratings.size(), 1);
    for (size_t i = 1; i < ratings.size(); ++i) {
      if (ratings[i] > ratings[i - 1]) {
        candy[i] = candy[i - 1] + 1;
      }
    }
    for (size_t i = ratings.size() - 1; i > 0; --i) {
      if (ratings[i - 1] > ratings[i] && candy[i - 1] <= candy[i]) {
        candy[i - 1] = candy[i] + 1;
      }
    }
    return accumulate(candy.begin(), candy.end(), 0);
  }
};