// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin >>n;
    int array[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> array[i][j];
            
        }
    }
    int count=0;
    int a=n-1;
    int mid;
    mid = (n-1)/2;
    
    for(int i=0;i<n;i++){
        count=count+array[i][mid]+array[mid][i]+array[i][i]+array[i][a];
         a--;
         
    }
    cout << count-(3*array[mid][mid]);
   
    
    

    return 0;
}