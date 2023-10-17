#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, q, a, m;
    vector<int> ar;

    cin >> n >> k >> q;
    for (int i = 0; i < n; i++) {
        cin >> a;
        ar.push_back(a);
    }

    k %= n;

    for (int i = 0; i < q; i++) {
        cin >> m;
        if (m - k >= 0) {
            cout << ar[m - k] << endl;
        } else {
            cout << ar[m - k + n] << endl;
        }
    }

    return 0;
}
