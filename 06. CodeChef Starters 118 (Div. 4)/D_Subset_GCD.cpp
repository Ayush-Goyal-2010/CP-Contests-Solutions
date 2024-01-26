#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
	    int n, k;
	    cin >> n >> k;
	    int a = n / k;
	    vector<int> arr;
	    for (int i = 1; i <= k; i++){
	        arr.push_back(a * i);
	    }
	    for (int i = 0; i < k; i++){
	        cout << arr[i] << " ";
	    }
	    cout << "\n";
	}
}