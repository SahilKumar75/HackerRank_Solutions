#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    getline(cin, a);

    start:
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == a[i + 1]) {
            a.erase(i, 2);
            goto start;
        }
    }

    if (a.length() == 0) {
        cout << "Empty String" << endl;
    } else {
        cout << a << endl;
    }
    return 0;
}
