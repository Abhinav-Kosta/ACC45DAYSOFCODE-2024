#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    if(n < 2){
	        cout << 0 << endl;
	    }
	    else if(n == 2){
	        cout << 1 << endl;
	    }
	    else{
	        n = n - 2;
	        cout << (n/7) + 1 << endl;
	    }
	}
}