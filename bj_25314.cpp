#include <iostream>
using namespace std;

int main() {
    int n = 0;

    cin >> n;

    for(int i = 0; i < n; i += 4) {
        cout << "long ";
    }

    cout << "int" << endl;

    return 0;
}