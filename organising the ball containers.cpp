#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll row[n], col[n];
        for (int i = 0; i < n; i++) {
            row[i] = col[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x;
                cin >> x;
                row[i] += x;
                col[j] += x;
            }
        }
        sort(row, row + n);
        sort(col, col + n);
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (row[i] != col[i]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << "Possible" << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}
