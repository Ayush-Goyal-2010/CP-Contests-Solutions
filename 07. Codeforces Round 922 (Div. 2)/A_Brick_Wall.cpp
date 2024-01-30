#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n, m;
        std::cin >> n >>  m;
        if (m % 2 == 1){
            std::cout << (n * (m - 1)) / 2 << std::endl;
        }
        else {
            std::cout << (n * m) / 2 << std::endl;
        }
    }
}