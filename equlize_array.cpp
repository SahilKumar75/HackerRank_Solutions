#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int max = a[0];
    int c = 1;
    int maxi = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] == max) {
            c++;
            if (c > maxi) {
                maxi = c;
            }
        } else {
            max = a[i];
            c = 1;
        }
    }

    cout << n - maxi << endl;
    return 0;
}
