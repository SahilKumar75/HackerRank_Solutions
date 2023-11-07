#include <iostream>

int main() {
    int T, N, C, M, ans = 0;
    std::cin >> T;
    while (T--) {
        std::cin >> N >> C >> M;
        int tmp = ans = N / C;
        while (tmp >= M) {
            ans++;
            tmp -= M;
            tmp++;
        }
        std::cout << ans << std::endl;
    }
    return 0;
}
