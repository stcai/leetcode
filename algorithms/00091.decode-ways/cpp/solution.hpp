#include <string>

using namespace std;

class Solution {
 public:
  int numDecodings(string s) {
    if (s[0] == '0') {
      return 0;
    }

    vector<int> dp = vector(s.size() + 1, 1);
    for (int i = 2; i <= s.size(); ++i) {
      if (s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] <= '6')) {
        if (s[i - 1] != '0') {
          dp[i] = dp[i - 1] + dp[i - 2];
        } else {
          dp[i] = dp[i - 2];
        }
      } else if (s[i - 1] == '0') {
        return 0;
      } else {
        dp[i] = dp[i - 1];
      }
    }
    return dp[s.size()];
  }
};