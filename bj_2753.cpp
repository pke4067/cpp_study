#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    if(year > 0 && year <= 4000) {
        if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            cout << "1" << endl;
        }
        else {
            cout << "0" << endl;
        }
    }
    else {
        cout << "잘못된 입력입니다." << endl;
    }

    return 0;
}