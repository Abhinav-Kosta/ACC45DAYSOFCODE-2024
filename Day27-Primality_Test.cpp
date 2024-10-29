#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    int flag = 1;
	    
	    if(n == 2){
	        cout << "yes" << endl;
	    }
	    else if(n == 0 || n == 1){
	        cout << "no" << endl;
	    }
	    else{
	        for(int i = 2; i < n; i++){
	             if(n % i == 0){
	               flag = 0;
	               break;
	            }
	        }
	    
	        if(flag == 1){
	            cout << "yes" << endl;
	        }
	        else{
	            cout << "no" << endl;
	        }
	   }
	}
}