#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x, a, b;
	    cin >> x >> a >> b;
	    
	    if(a +(2*b) >= x){
	        cout << "Qualify" << endl;
	    }
	    else{
	        cout << "NotQualify" << endl;
	    }
	}
}