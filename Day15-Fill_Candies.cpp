#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, k, m;
	    cin >> n >> k >> m;
	    
	    int a = n / (k*m);
	    
	    if(n % (k*m) != 0){
	        cout << a + 1 << endl;
	    }
	    else{
	        cout << a << endl;
	    }
	}
}