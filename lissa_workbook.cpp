#include <iostream>
using namespace std;

int main() {
    int n, k, j, x, ans, page, i;
    page = 1;

    cin >> n >> k;
    ans = 0;

    for (i = 1; i <= n; i++) {
        cin >> x;
        for (j = 1; j <= x; j++) {
            if (page == j) {
                ans++;
            }
            if (j % k == 0) {
                page++;
            }
        }
        if (x % k != 0) {
            page++;
        }
    }
    cout << ans << endl;
    return 0;
}
