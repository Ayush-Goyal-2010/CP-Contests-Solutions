//TO BE UPSOLVED
#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while (t--){
        int n;
        std::cin >> n;
        std::vector<int> a;
        std::vector<int> b;
        int x, y;
        for (int i = 0; i < n; i++){
            std::cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++){
            std::cin >> x;
            a.push_back(x);
        }

        sort(a.begin(), a.end());

        for (auto it: a){
            if (it == 0){
                continue;
            }
            std::cout << it << " ";
        }
        std::cout << std::endl;
        
        for (auto it: b){
            if (it == 0){
                continue;
            }
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }
}