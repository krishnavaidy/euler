#include <algorithm>
#include <cmath>
#include <cstdint>
#include <iostream>

class LargestPrime {
private:
public:
  uint64_t largestPrime(uint64_t n) {
    uint64_t largest_prime = 0;
    auto upper_bound = sqrt(n);
    for (uint64_t i=2; i<=upper_bound; i++) {
      while (n%i==0 && n>0) {
        n = n/i;
        largest_prime = max(largest_prime, i);
      }
    }
    return largest_prime;
  }

  uint64_t max(uint64_t a, uint64_t b) {
    return (a>b) ? a : b;
  }
};

int main() {
  auto l = new LargestPrime();
  std::cout<<l->largestPrime(600851475143);
  return 0;
}
