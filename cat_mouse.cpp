#include <bits/stdc++.h>
using namespace std;

int main() {
    int numTestCases;
    cin >> numTestCases;  // Read the number of test cases from the input.

    for (int testCase = 0; testCase < numTestCases; ++testCase) {
        int p, q, r;  // 'p', 'q', and 'r' represent the positions of the cat A, cat B, and the mouse, respectively.
        cin >> p >> q >> r;  // Read the positions of the cats and the mouse from the input.

        // Calculate the absolute distances of cat A and cat B from the mouse.
        int distanceCatA = abs(p - r);
        int distanceCatB = abs(q - r);

        if (distanceCatA == distanceCatB) {
            // If the distances are equal, the mouse escapes and reaches the cheese at the same time.
            cout << "Mouse C" << endl;  // Print "Mouse C" indicating the mouse wins.
        } else if (distanceCatA < distanceCatB) {
            // If the distance to cat A is less, cat A catches the mouse first.
            cout << "Cat A" << endl;  // Print "Cat A" indicating cat A wins.
        } else {
            // If the distance to cat B is less, cat B catches the mouse first.
            cout << "Cat B" << endl;  // Print "Cat B" indicating cat B wins.
        }
    }

    return 0;  // Return 0 to indicate successful execution of the program.
}
