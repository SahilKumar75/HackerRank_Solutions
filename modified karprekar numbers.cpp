#include <iostream>
#include <cmath>

using namespace std;

long long digitCount(long long x) {
    long long cnt = 0;
    while (x) {
        cnt++;
        x /= 10;
    }
    return cnt;
}

long long splitNumber(long long x) {
    long long tmp = 1;
    while (x) {
        tmp *= 10;
        x--;
    }
    return tmp;
}

long long check(long long x) {
    while (x % 10 == 0) x /= 10;
    return x;
}


