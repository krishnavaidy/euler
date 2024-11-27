#include <iostream>

int64_t sumOfSquares(int n) {
    int64_t sum=0;
    for (int64_t i=1; i<=n; i++) {
        sum += i*i;
    }
    return sum;
}

int64_t squareOfSum(int n) {
    int64_t sum=0;
    for (int64_t i=1; i<=n; i++) {
        sum += i;
    }
    return sum*sum;
}

int main() {
    std::cout<<"\nAns: "<<sumOfSquares(100) - squareOfSum(100);
    return 0;
}