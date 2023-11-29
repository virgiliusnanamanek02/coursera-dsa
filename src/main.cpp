#include "../solutions/sum-two.cpp"
#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;

  int sum = add_two(a, b);

  std::cout << sum << std::endl;
}
