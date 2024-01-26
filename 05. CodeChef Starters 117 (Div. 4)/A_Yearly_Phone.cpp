#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    int k = x % 100;
    if (k < 10){
        std::cout << "K0" << k;
    }
    else{
        std::cout << "K" << k;
    }
}
