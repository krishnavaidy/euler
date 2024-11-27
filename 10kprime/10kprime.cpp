#include <iostream>
#include <vector>
#include <cmath>

std::vector<bool> sieveOfErasthones(int64_t n) {
    std::vector<bool> primes = std::vector(n+1, true);
    primes[0] = false;
    primes[1] = false;
    for (int64_t i=2; i<=std::sqrt(n); i++) {
        if (primes[i]==false)
            continue;
        int64_t p = i*2;
        while (p<=n) {
            primes[p] = false;
            p += i;
        }
    }
    return primes;
}

int main()
{
    auto primes = sieveOfErasthones(1000000);
    int n=0;
    for (int i=0; i<primes.size(); i++) {
        if (primes[i])
            n++;
        if (n==10001) {
            std::cout<<"primes "<<i;
            break;
        }
    }
    std::cout<<"\ndone "<<n;
    return 0;
}