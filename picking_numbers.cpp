#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int max_sequence = 0;
    int current_sequence = 0;

    for (int i = 0; i < n; i++) {
        current_sequence = 1;
        for (int j = i + 1; j < n; j++) {
            if (abs(a[i] - a[j]) <= 1) {
                current_sequence++;
            } else {
                break;
            }
        }
        max_sequence = max(max_sequence, current_sequence);
    }

    cout << max_sequence << endl;
    return 0;
}
