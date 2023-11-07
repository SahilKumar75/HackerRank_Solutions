#include <iostream>
using namespace std;

int main() {
    int num;
    int i, k = 0, j, carry = 0, arr[1000] = {1};
    cin >> num;
    
    for (i = 1; i <= num; i++) {
        for (j = 0; j <= k; j++) {
            arr[j] = arr[j] * i + carry;
            carry = arr[j] / 10;
            arr[j] = arr[j] % 10;
        }
        
        while (carry) {
            k++;
            arr[k] = carry % 10;
            carry /= 10;
        }
    }
    
    for (i = k; i >= 0; i--)
        cout << arr[i];
    
    return 0;
}
