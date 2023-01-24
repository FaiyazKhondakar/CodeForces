#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;
    char max=a[0];
    for(int i=1;i<a.length();i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i =0; i<a.length();i++){
        if(max==a[i]){
            cout << max;
        }
    }
    
    
    
    

    return 0;
}