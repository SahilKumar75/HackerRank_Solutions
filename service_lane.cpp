#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    int t, n;
    cin >> n >> t;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while (t--) {
        int l, r;
        cin >> l >> r;
        int min_val = numeric_limits<int>::max();

        for (int i = l; i <= r; i++) {
            if (a[i] < min_val) {
                min_val = a[i];
            }
        }

        cout << min_val << endl;
    }

    return 0;
}
