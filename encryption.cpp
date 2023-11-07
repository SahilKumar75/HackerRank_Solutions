#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    char s[1000];
    cin.getline(s, 1000);
    int len = strlen(s);
    int width, height;
    int lo = floor(sqrt(len)), hi = ceil(sqrt(len));
    int i, j;
    bool found = false;

