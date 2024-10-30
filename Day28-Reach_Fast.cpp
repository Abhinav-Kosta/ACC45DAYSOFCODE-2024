#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a, b, k;
	    cin >> a >> b >> k;
	    
	    int z = (b-a) % k;
	    
	    if(z){
	        cout << abs((b-a)/k) + 1 << endl;
	    }
	    else{
	        cout << abs((b-a)/k) << endl;
	    }
	}
}