#include <iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>



using namespace std;


int main() {
    string c  = " abbaca";
    string res = " ";
    res.push_back(c[0]);
    int j = 0;
    for(int i = 1;i<c.size();i++){
        if(c[i]!=res[res.size()-1]){
            res.push_back(c[i]);
            j++;
        }
        else{
            j--;
            res.pop_back();
        }
        
    }
    
    // c.pop_back();
    cout << res << endl;
    return 0;
}