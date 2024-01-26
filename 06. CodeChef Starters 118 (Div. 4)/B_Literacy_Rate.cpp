#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int p, l;
        cin >> p >> l;
        if ((l * 100) / p >= 75){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
