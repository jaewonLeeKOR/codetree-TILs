#include <iostream>
using namespace std;

long long multiply(int a, int b) {
    if(b==1) return a;
    int half = multiply(a,b/2);
    if(b%2==1) return half * half * a;
    return half * half;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << multiply(a,b);
    return 0;
}