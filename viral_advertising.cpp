#include <iostream>
using namespace std;

int main() {
    int n, c = 0, s = 5, sum = 0;
    cout << "Enter the number of iterations (n): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Calculate the number of likes on each day and add it to the total sum.
        int dailyLikes = s / 2;  // Integer division by 2
        sum += dailyLikes;

        // Update the total shares for the next day.
        s = dailyLikes * 3;  // Multiply the dailyLikes by 3 for the next day.

        // Optionally, you can print the daily likes for each day.
        cout << "Day " << i + 1 << ": " << dailyLikes << " likes" << endl;
    }

    cout << "Total likes after " << n << " days: " << sum << endl;
    return 0;
}
