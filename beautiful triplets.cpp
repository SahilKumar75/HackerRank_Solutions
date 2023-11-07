#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int beautifulTriplets(int d, vector<int> arr) {
    int triplets = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] - arr[i] == d) {
                for (int k = j + 1; k < arr.size(); k++) {
                    if (arr[k] - arr[j] == d) {
                        triplets++;
                        break;
                    }
                }
            }
        }
    }
    
    return triplets;
}

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = beautifulTriplets(d, arr);

    cout << result << "\n";

    return 0;
}
