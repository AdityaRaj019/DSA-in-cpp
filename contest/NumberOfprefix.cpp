#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
int prefixConnected(vector<string>& words, int k) {

        unordered_map<string, vector<string>> mp;

        for (string s : words) {
            if(s.size()<k) continue;
            string pre = s.substr(0,k);
            mp[pre].push_back(s);
        }
        int cnt =0;
        for(auto it:mp){
            if(it.second.size()>=2)cnt++;
        }
        return cnt;
    }

int main() {
      
    cout << "" << endl;
    return 0;
}