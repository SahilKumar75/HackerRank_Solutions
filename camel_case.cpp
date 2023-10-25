#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int c = 1;
    
    for (char ch : s) {
        if (ch >= 'A' && ch <= 'Z') {
            c++;
        }
    }

    cout << c << endl;
    return 0;
}
