#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    int count;
    cin >> name;
    transform(name.begin(), name.end(), name.begin(), ::tolower);
    sort(name.begin(),name.end());
    for(int i=0;i<name.length();i++){
        if(i!=name.length()){
            if(name[i]!=name[i+1]){
                count++;
            }
        }
    }
    if(count%2==0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }

    return 0;
}