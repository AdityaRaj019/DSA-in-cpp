#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
    int firstUniqueFreq(vector<int>& nums) {

        map<int,int>freq;

        for(int i:nums){
            freq[i]++;
        }
        map<int,int> mp;
        for(auto it:freq){
            mp[it.second]++;
        }
        // for(auto it:mp){
        //     if(it.second.size()==1){
        //         return it.second[0];
        //     }
        // }

        for(int i :nums){
            int cnt = freq[i];
            if(mp[cnt]==1)return i;
        }
        return -1;
    }

int main() {
      
    cout << "" << endl;
    return 0;
}