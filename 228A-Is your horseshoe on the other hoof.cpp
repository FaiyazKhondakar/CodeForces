// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arra[4];
    int count =0, n=4;
    
    for(int i=0;i<n;i++){
        cin >> arra[i];
    }
    sort(arra,arra+n);
    for(int i=0; i<n;i++){
        if(arra[i]==arra[i+1]){
            count++;
        }
    }
    cout << count;

    return 0;
}