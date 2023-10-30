#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long t, b, w, x, y, z, i, j, k, costofb, costofw;
    cin >> t;
    while (t--) {
        cin >> b >> w;
        cin >> x >> y >> z;
        costofb = b * x;
        costofw = w * y;
        if (x == y) {
            cout << costofb + costofw << endl;

}
