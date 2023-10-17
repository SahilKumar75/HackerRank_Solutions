#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    for (int t = 0; t < T; t++) {
        int N, M, S;
        cin >> N >> M >> S;

        int result = (M + S - 1) % N;
        if (result == 0) {
            cout << N << endl;
        } else {
            cout << result << endl;
        }
    }

    return 0;
}
