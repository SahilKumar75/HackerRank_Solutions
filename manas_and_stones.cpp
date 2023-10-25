#include <iostream>
using namespace std;

int main() {
    int i;
    int n, a, b, t;
    int arr[1000] = {0};

    cin >> t;

    while (t--) {
        cin >> n;
        cin >> a;
        cin >> b;

        for (i = 0; i < n; i++) {
            if (a == b) {
                cout << a * (n - 1);
                break;
            } else if (a > b) {
                arr[i] = (b * (n - 1 - i)) + (a * i);
            } else {
                arr[i] = (a * (n - i - 1)) + (b * i);
            }
            cout << arr[i] << " ";
        }

        cout << endl;
    }
    return 0;
}
