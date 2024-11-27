#include <iostream>

int main() {
    for (int a=1; a<=1000; a++) {
        for (int b=a+1; b<=1000; b++) {
            for (int c=b+1; c<=1000; c++) {
                if (a+b+c != 1000) {
                    continue;
                } else if ((a*a + b*b ) == c*c) {
                    std::cout<<"\n abc: "<<a*b*c<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}