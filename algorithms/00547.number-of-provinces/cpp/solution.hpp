#include <array>
#include <queue>
#include <vector>

using namespace std;

class Solution {
 public:
  int findCircleNum(vector<vector<int>>& isConnected) {
    const int n = isConnected.size();
    int count = 0;
    auto visited = vector<bool>(n, false);
    for (int i = 0; i < n; ++i) {
      if (!visited[i]) {
        ++count;

        queue<int> pending_node_queue;
        pending_node_queue.push(i);
        while (!pending_node_queue.empty()) {
          const int node = pending_node_queue.front();
          pending_node_queue.pop();

          visited[node] = true;
          for (int j = i + 1; j < n; ++j) {
            if (!visited[j] && isConnected[node][j] == 1) {
              pending_node_queue.push(j);
            }
          }
        }
      }
    }
    return count;
  }
};