#include <iostream>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;

    if(h < 0 || h > 23 || m < 0 || m > 59) {
        cout << "잘못된 입력입니다." << endl;
        return 0;
    }

    m -= 45;
    if(m < 0) {
        m += 60;
        h -= 1;
    }
    if(h < 0) {
        h += 24;
    }

    cout << h << " " << m << endl;
    return 0;
}
