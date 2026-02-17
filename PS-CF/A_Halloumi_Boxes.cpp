



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){

    ll n,k ; 
    cin >> n >> k ;

    vector<ll> nums(n); 

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    

    vector<ll> nums2 = nums ; 

    sort(nums2.begin(), nums2.end());

    // if(nums == nums2 ||   k >= 2){ 
    if(is_sorted(nums.begin(), nums.end()) || k >=2){
         cout << "YES" ; 
    }else{
        cout << "NO" ; 
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