#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    while (t--){
        int n, x, y;
        std::cin >> n >> x >> y;
        if (x < n){
            std::cout << "NO" << endl;
        }
        else if (x == n && y < 3 * n){
            std::cout << "NO" << endl;
        }
        else {
            int p = y / 3;
            int req = n - p;
            x -= p;
            if (x < req * 2){
                std::cout << "NO" << endl;
            }
            else {
                std::cout << "YES" << endl;
            }
        }
        
    }
}
