#include <iostream>

int gcd(int a, int b) {
    if(a == b) return a;
    else if(a==0) return b;
    else if(b==0) return a;
    else if(a > b) {
        a = a % b;
    }
    else if(a < b) {
        b = b % a;
    }
    return gcd(a,b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a,b);
    return 0;
}