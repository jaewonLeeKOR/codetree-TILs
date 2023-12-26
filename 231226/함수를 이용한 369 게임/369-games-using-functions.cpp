#include <iostream>
using namespace std;
int main() {
    int cnt = 0, x, y;
    cin >> x >> y;
    for(int i=x; i<=y; i++) {
        if(i%3 == 0) {
            cnt++;
            continue;
        }
        int num = i;
        while(num) {
            if((num % 10)%3 == 0 && (num % 10) != 0) {
                cnt++;
                break;
            }
            num = num / 10;
        }
    }
    cout << cnt;
    return 0;
}