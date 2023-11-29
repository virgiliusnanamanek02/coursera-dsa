#include <iostream>
#include <vector>

using std::size_t;
using std::vector;

long long max_pairwise_product(const vector<int> &nums) {
  long long result = 0;
  int n = nums.size();

  for (size_t i = 0; i < n; ++i) {
    for (size_t j = i + 1; j < n; ++j) {
      if (((long long)nums[i]) * nums[j] > result) {
        result = ((long long)nums[i]) * nums[j];
      }
    }
  }

  return result;
}
