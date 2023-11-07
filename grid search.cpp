#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int M, N, R, C;
vector<string> g, pat;

bool present(int x, int y) {
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            int ii = i + x, jj = j + y;
            if (ii >= M || jj >= N)
                return false;
            else if (g[ii][jj] != pat[i][j])
                return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    assert(t >= 1 && t <= 5);

    while (t--) {
        cin >> M >> N;
        g = vector<string>(M);
        for (int i = 0; i < M; ++i) {
            cin >> g[i];
            assert(g[i].size() == N);
            for (int j = 0; j < N; ++j) {
                assert(isdigit(g[i][j]));
            }
        }

        cin >> R >> C;
        pat = vector<string>(R);
        for (int i = 0; i < R; ++i) {
            cin >> pat[i];
            assert(C == pat[i].size());
            for (int j = 0; j < C; ++j) {
                assert(isdigit(pat[i][j]));
            }
        }

        bool isPresent = false;

        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                isPresent = present(i, j);
                if (isPresent)
                    break;
            }
            if (isPresent)
                break;
        }

        cout << (isPresent ? "YES" : "NO") << "\n";
    }

    return 0;
}
