#include "../solutions/max-two-product.cpp"
#include "../solutions/sum-two.cpp"
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::size_t;
using std::vector;

int main() {
  int n;
  cin >> n;

  vector<int> nums(n);

  for (size_t i = 0; i < n; ++i) {
    cin >> nums[i];
  }

  long long result = max_pairwise_product(nums);

  cout << result << endl;
}

