#include <iostream>

int gcd(int a, int b) {
    if(a == b) return a;
    if(a == 0) return b;
    if(b == 0) return a;
    if(a > b) return gcd(a%b, b);
    if(a < b) return gcd(a, b%a);
}

int main() {
    int n,m;
    std::cin >> n >> m;
    std::cout << n * m /gcd(n,m);
    return 0;
}