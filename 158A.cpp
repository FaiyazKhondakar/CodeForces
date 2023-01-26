// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n, k;
    cin >> n >>k;
    int array[n];
    for(int i=0;i<n;i++){
        
        cin >> array[i];
    }
    int count=0;
    int b=0;
    
    for(int i=0;i<n;i++){
         if(array[k-1]<=array[i] && array[i] != 0) {
             count++;
         }
         if(array[i]==0){
             b++;
         }
    }
    
        cout << count;
    
    return 0;