#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <unordered_set>

#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

int guess(int num);

class Solution {
public:
  int guessNumber(int n) {
    int lo = 1;
    int hi = n;
    do {
      int mid = lo + (hi - lo) / 2;
      int result = guess(mid);
      if (result == 0)
        return mid;
      if (result == -1)
        hi = mid - 1;
      else
        lo = mid + 1;
    }  while (true);
  }
};

void test1() {
    vector<int> v1{1,2,3,4,5,6,7,8};

    vector<vector<int>> v2{
            vector<int>{0, 1, 0, 0},
            vector<int>{1, 1, 1, 0},
            vector<int>{0, 1, 0, 0},
            vector<int>{1, 1, 0, 0}
    };

    cout << " ? " << Solution().func(v1) << endl;
}

void test2() {

}

void test3() {

}