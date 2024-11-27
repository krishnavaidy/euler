#include <iostream>

bool isDivisible(int64_t n) {
    for (int i=1; i<=20; i++) {
        if (n%i != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int64_t n=20;
    while (true) {
        if (isDivisible(n)) {
            std::cout<<"\nAns: "<<n<<std::endl;
            break;
        }
        n++;
    }
    return 0;
}