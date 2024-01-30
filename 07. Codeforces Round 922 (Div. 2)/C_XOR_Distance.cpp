//TO BE UPSOLVED
#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        long long a, b, r;
        std::cin >> a >> b >> r;
        long long smol = 1, x = 1;
        if (r == 0){
                std::cout << abs(a - b) << std::endl;
        }
        else {
            for(long long i = 0; i <= r; i++){
                if (i == 0){
                    smol = abs((a ^ i) - (b ^ i));
                    x = i;
                }
                if (smol >= abs((a ^ i) - (b ^ i))){
                    smol = abs((a ^ i) - (b ^ i));
                    x = i;
                }
            }
            std::cout << smol << std::endl;
        }
        
    }
}