#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){
        int x ; 
        cin >> x;

            long long res ;
       for(int i = 1; i <=x; i++){
         if((sqrt(x * x) ) == x) {
            res = i + 1;
        }
        cout << res << " " ;
       }
       cout << endl; 
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tst{
        firebird_solve();
    }

    return 0;
}