#include <iostream>

int main() {
    int n, m = 0;
    std::cin >> n;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            m = m % 9;
            std::cout << ++m << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}