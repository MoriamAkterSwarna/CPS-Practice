// https://www.codechef.com/problems/HS08TEST

#include<bits/stdc++.h> 

using namespace std; 


int main() {
    
    long long x;
    float y; 
    cin >> x >> y; 

    float result ;
    if(x % 5 == 0 && y >= (x + 0.50)){
        result = y - x - 0.50; 
       
    }
    else {
         result = y; 
    }
    cout << fixed << setprecision(2) << result ;
}