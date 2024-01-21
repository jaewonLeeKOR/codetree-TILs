#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n == 1) return false;
    for(int i=2; i*i<=n; i++) {
        if(n%i == 0)
            return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, sum=0;
    cin >> a >> b;
    for(int i=a; i<=b; i++) {
        if(isPrime(i))
            sum += i;
    }
    cout << sum;
    return 0;
}