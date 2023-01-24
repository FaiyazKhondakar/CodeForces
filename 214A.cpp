#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,b;
    int count=0;
    cin >> n ;
    cin >> m;
    for(int a=0;a<=sqrt(n);a++){
        b=n-a*a;
        if(a+b*b==m){
            count++;
        }
    }
    cout << count;

    return 0;
}