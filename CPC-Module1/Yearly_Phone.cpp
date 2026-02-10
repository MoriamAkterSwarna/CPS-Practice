

#include <bits/stdc++.h> 
using namespace std; 

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int x ; 
    cin >> x ;

   string str = to_string(x); 

    for(int i =0; i < str.length(); i++){
        if(i ==0){
            str.erase(str.begin());
            
        }
       
     if(i <= 1){
            
            str[i]= 'K';
            
            break;
        }
        
    }

    cout << str ;

}