#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    
    for (int a0 = 0; a0 < t; a0++) {
        int n;
        std::cin >> n;
        
        std::vector<int> numbers(n);
        for (int i = 0; i < n; i++) {
            std::cin >> numbers[i];
        }
        
        int number_of_inversions = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (numbers[i] > numbers[j]) {
                    number_of_inversions++;
                }
            }
        }
        
        std::cout << (number_of_inversions % 2 == 0 ? "YES" : "NO") << std::endl;
    }
    
    return 0;
}
