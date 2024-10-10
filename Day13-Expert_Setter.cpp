#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
	    int x, y;
	    cin >> x >> y;
	    if(x % 2 == 0){
	       if(y >= x/2){
	           cout << "YES" << endl;
	       }
	       else{
	           cout << "NO" << endl;
	       }
	    }
	    else{
	        if(y > x/2){
	           cout << "YES" << endl;
	       }
	       else{
	           cout << "NO" << endl;
	       }
	    }
	    
	}

}