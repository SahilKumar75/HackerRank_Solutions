#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int dist = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                dist = min(dist, abs(i - j));
            }
        }
    }

    if (dist == INT_MAX) {
        dist = -1;
    }

    cout << dist << endl;

    return 0;
}
