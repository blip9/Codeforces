#include <iostream>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int a, b, c;
        std::cin >> a >> b >> c;

        int minHeight = std::max(a + 1, b + 2) + c;
        if (a == 0 && b == 0 && c == 0) {
            minHeight = 1; // Edge case when there's no vertices
        } else if (a == 0 && b == 0 && c > 0) {
            minHeight = -1; // No tree is possible
        }

        std::cout << minHeight << std::endl;
    }

    return 0;
}
