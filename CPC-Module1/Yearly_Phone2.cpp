

#include <bits/stdc++.h> 
using namespace std; 

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int x ; 
    cin >> x ;

   string str = to_string(x); 

   str.replace(0,2, "K");

   cout << str;  



}