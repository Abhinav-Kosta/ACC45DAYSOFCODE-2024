#include <bits/stdc++.h>
using namespace std;

bool isPrime(int p){
    if(p < 2){
        return false;
    }
    else if(p == 2){
        return true;
    }
    else{
        for(int i = 2; i < p; i++){
            if(p % i == 0){
                return false;
            }
        }
        return true;
    }
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int f, s;
	    cin >> f >> s;
	    
	    for(int i = f; i <= s; i++){
	        if(isPrime(i)){
	            cout << i << endl;
	        }
	    }
	    cout << endl;
	}
}