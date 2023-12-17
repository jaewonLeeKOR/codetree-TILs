#include <iostream>

int main() {
    int n;
    std::cin >> n;
    if(n % 2 == 0 && (n/10 + n%10) % 5 == 0)
        std::cout << "Yes";
    else std::cout << "No";
    return 0;
}