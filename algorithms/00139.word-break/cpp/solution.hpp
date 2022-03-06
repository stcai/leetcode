#include <string>
#include <vector>

using namespace std;

class Solution {
 public:
  bool wordBreak(string s, vector<string>& wordDict) {
    vector<bool> dp(s.size() + 1, false);
    dp[0] = true;
    for (int i = 1; i <= s.size(); ++i) {
      for (const auto& word : wordDict) {
        if (dp[i]) {
          continue;
        }
        if (i >= word.size() &&
            s.substr(i - word.size(), word.size()) == word) {
          dp[i] = dp[i - word.size()];
        }
      }
    }
    return dp[s.size()];
  }
};