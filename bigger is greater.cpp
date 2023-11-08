#include <iostream>
#include <algorithm>
#include <string>

int main() {
    int tc;
    std::cin >> tc;
    while (tc--) {
        std::string s;
        std::cin >> s;
        if (std::next_permutation(s.begin(), s.end()))
            std::cout << s << std::endl;
        else
            std::cout << "no answer" << std::endl;
    }
    return 0;
}
