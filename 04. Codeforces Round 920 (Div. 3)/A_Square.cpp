#include <bits/stdc++.h>
 
int main() {
    int t;
    std::cin >> t;
 
    while (t--) {
        int x[4], y[4];
        for (int i = 0; i < 4; ++i) {
            std::cin >> x[i] >> y[i];
        }
 
        std::sort(x, x + 4);
        std::sort(y, y + 4);
 
        int side = std::max(x[2] - x[1], y[2] - y[1]);
        int area = side * side;
 
        std::cout << area << std::endl;
    }
 
    return 0;
}