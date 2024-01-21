#include <iostream>
using namespace std;

bool isYoon(int n) {
    if(n%4==0 && n%100==0 && n%400==0)
        return true;
    if(n%4==0 && n%100==0)
        return false;
    if(n%4==0)
        return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int y;
    cin >> y;
    cout << (isYoon(y) ? "true" : "false");
    return 0;
}