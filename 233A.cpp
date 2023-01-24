#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n];
    if(n%2==0){
        for(int i=1;i<=n;i++){
            if(i%2==1){
                array[i]=i+1;
            }
            else{
                array[i]=i-1;
            }
            cout << array[i]<< " ";
        }
    }
    else{
        cout << "-1";
    }

    return 0;
}