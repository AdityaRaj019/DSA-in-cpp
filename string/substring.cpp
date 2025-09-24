#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;


int main() {
    string c = "hello";
    for(int i = 0;i<c.length();i++){
        for(int j = i;j<c.length();j++){
            cout << "{";
            for(int k = i;k<=j;k++){
                cout <<c[k];
            }
            
            cout<<"}"<<",";
        }
    }
    cout << "" << endl;
    return 0;
}