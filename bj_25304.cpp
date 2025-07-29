#include <iostream>
using namespace std;

int main() {
    int x, n, a, b;

    cin >> x;
    cin >> n;

    int sum = 0;
        
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        int money = 0;
        money = a * b;
        sum += money;
    }

    if(sum == x) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}