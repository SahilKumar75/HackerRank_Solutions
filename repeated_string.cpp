#include <iostream>
#include <string>

int main() {
    std::string str;
    long long n, cnt = 0, rem, rept, remCnt = 0;
    std::cin >> str;
    std::cin >> n;
    long long len = str.length();
    rem = n % len;
    rept = n / len;
    for (int i = 0; i < len; i++) {
        if (str[i] == 'a') cnt++;
        if (str[i] == 'a' && i < rem) remCnt++;
    }
    std::cout << (cnt * rept) + remCnt << std::endl;
    return 0;
}
