#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int p1 = 0;
    int p2 = 0;
    int totalLead = 0;
    int winner = 0;
    
    for(int i = 0; i < n; i++){
        int s1, s2;
        cin >> s1 >> s2;
        
        p1 += s1;
        p2 += s2;
        
        int lead = abs(p1 - p2);
        
        int leader = (p1 > p2) ? 1 : 2;
        
        if(lead > totalLead){
            totalLead = lead;
            winner = leader;
        }
    }
    
    cout << winner << " " << totalLead << endl;
}