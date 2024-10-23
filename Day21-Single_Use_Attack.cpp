#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int h, x, y;
	    cin >> h >> x >> y;
	    int attack = 1;
	    h = h - y;
	    while(h > 0){
	        h = h - x;
	        attack++;
	    }
	    cout << attack << endl;
	}
}