#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;


int main() {
    string s ="daabcbaabcbc";
    cout<<s.find("abc");
    // string temp = "";

    // for(int i = 0;i<s.size();i++){
    //     if(s[i]==' '){
    //         temp.push_back('@');
    //         temp.push_back('4');
    //         temp.push_back('0');
    //     }
    //     else{
    //         temp.push_back(s[i]);
    //     }
    // }

    // if(s.find("abc")){
    //     cout<<1;
    // }
    while(s.find("abc")<=s.size()){
        s.erase(s.find("abc"),3);
    }
    cout<<s;

    // cout << s[2]<< endl;
    return 0;
}