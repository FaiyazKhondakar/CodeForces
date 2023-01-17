// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int size, a ,b, d , c,p=0;
    cin >> size;
    while(size--){
        cin >> a;
        cin >> b;
        cin >> d;
        c=a+b+d;
        if(c>1){
            p++;
        }
    }
    cout << p;
    

    return 0;
}