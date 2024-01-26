#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
	    int x;
	    cin >> x;
	    int a = 0, b = 0, c = 0;
	    for(int i = 29; i >= 0; --i){
	        if((x >> i) & 1){
	            if (c){
	                a -= (1 << i);
	                b += (1 << i);
	            }
	            else {
	                a += (1 << i);
	                c = 1;
	            }
	        }
	    }
	    cout << b << " " << a + b << endl;
	}
}
