#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::size_t;
using std::vector;

int max_pairwise_product(const vector<int> &nums) {
  int result = 0;
  int n = nums.size();

  for (size_t i = 0; i < n; i++) {
    for (size_t j = i + 1; j < n; j++) {
      if (nums[i] * nums[j] > result) {
        result = nums[i] * nums[j];
      }
    }
  }

  return result;
}
