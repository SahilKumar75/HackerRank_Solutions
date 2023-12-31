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
    
    for (i = lo; i <= hi; i++) {
        for (j = i; j <= hi; j++) {
            if (i * j >= len) {
                found = true;
                break;
            }
        }
        if (found) break;
    }
    
    width = j;
    height = i;
    int index = 0;
    
    for (i = 0; i < width; i++) {
        for (j = 0; j < height; j++) {
            index = j * width + i;
            if (index < len) cout << s[index];
        }
        cout << ' ';
    }
    
    return 0;
}
