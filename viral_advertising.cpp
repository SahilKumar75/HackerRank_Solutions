#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    for (int i = 0, s = 5; i < n; i++) {
        sum += s / 2;
        s = (s / 2) * 3;
    }

    cout << sum << endl;
    return 0;
}
