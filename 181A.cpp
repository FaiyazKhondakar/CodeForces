#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >>m;
    char crime[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> crime[i][j];
            
        }
        
    }
    int a=0;
    int i1[3],j1[3];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            if(crime[i][j] =='*'){
                i1[a]=i+1;
                j1[a]=j+1;
                a++;
                
            }
        }
    }
    if(i1[0]==i1[1]&&j1[0]==j1[2]){
        cout << i1[2] <<" "<< j1[1];
    }
    if(i1[1]==i1[2]&&j1[0]==j1[2]){
        cout << i1[0] <<" "<< j1[1];
    }
    if(i1[1]==i1[2]&&j1[0]==j1[1]){
        cout << i1[0] <<" "<< j1[2];
    }
    if(i1[0]==i1[1]&&j1[1]==j1[2]){
        cout << i1[2] <<" "<< j1[0];
    }
    

    return 0;
}