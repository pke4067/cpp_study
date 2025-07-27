#include <iostream>
using namespace std;

int main() {
    int x, y;

    cin >> x;
    cin >> y;

    if((x <= 1000 && x >= -1000) && (y <= 1000 && y >= -1000) && (x != 0) && (y != 0)){
        if(x > 0 && y > 0) {
            cout << "1" << endl;
        }
        else if(x < 0 && y > 0) {
            cout << "2" << endl;
        }
        else if(x < 0 && y < 0) {
            cout << "3" << endl;
        }
        else if(x > 0 && y < 0) {
            cout << "4" << endl;
        }
    }
    else {
        cout << "잘못된 입력입니다." << endl;
    }

    return 0;
}