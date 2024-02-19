#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string line;
        cin >> line;
        int noa = 0;
        int nob = 0;
        for (int i = 0; i < 5; i++){
            if (line[i] == 'A'){
                noa += 1;
            }
            else if (line[i] == 'B'){
                nob += 1;
            }
        }
        if (noa > nob){
            cout << "A" << endl;
        }
        else {
            cout << "B" << endl;
        }
    }
    return 0;
}