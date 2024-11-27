#include <cmath>
#include <cstdint>
#include <iostream>
#include <stack>

int64_t reverse(int64_t n) {
  std::stack<int> stack;
  while (n>0) {
    stack.push(n%10);
    n = n/10;
  }

  int64_t rev = 0;
  int power=0;
  while (!stack.empty()) {
    rev = rev + pow(10, power) * stack.top();
    stack.pop();
    power++;
  }

  return rev;
}

bool isPalindrome(uint64_t n) {
  auto rev = reverse(n);
  return  rev == n;
}

uint64_t max(uint64_t a, uint64_t b) {
  return a>b ? a : b;
}

int main() {
  uint64_t largest_pal = 0;
  for (int i=100; i<=999; i++) {
    for (int j=i; j<=999; j++) {
      uint64_t n = i*j;
      if (isPalindrome(n)) {
        largest_pal = max(largest_pal, n);
      }
    }
  }
  std::cout<<largest_pal<<std::endl;
  return 0;
}
