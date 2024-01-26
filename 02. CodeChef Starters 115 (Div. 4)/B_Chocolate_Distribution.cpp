#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        int min = 0;
        int max = n;
        if (n % 2 == 1){
            min = ((n - 1) / 2) + 1;
        }
        else if (n % 2 == 0){
            min = n / 2;
        }
        else if (n == 1){
            min = 1;
        }
        std::cout << min << " " << max << endl;
    }
}
