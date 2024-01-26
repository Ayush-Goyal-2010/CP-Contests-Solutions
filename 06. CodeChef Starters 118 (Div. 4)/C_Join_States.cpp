#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
	    int n, m;
	    cin >> n >> m;
	    vector<int> arr(n);
	    for(int  i = 0; i < n; i++){
	        cin >> arr[i];
	    }

	   int ms = 0, cp= 0;
	   for(int i = 0; i < n; i++){
	       cp += arr[i];
	       if (cp >= m){
	           ms++;
	           cp = 0;
	       }
	   }
	    
	    cout << ms << endl;
	}
}
