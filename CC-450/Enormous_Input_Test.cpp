// https://www.codechef.com/problems/INTEST

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){

    long long n, k; 
    cin >> n >> k; 

    long  long a; 
    long long count = 0 ;
    while(n--){
        cin >> a ; 

        if(a % k == 0){
            count++;
        }
    }
    cout << count ;
        
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // tst{
        firebird_solve();
    // }

    return 0;
}