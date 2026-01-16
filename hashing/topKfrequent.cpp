#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

 vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>um;
        for(auto i:nums){
            um[i]++;
        }
        int j=0;
        while(j<k){
            int i=0;
            int max_elem=0;
            for(auto it = um.begin(); it != um.end(); it++){
                // max_elem=max(max_elem,it->second);
                if(max_elem<it->second){
                    // cout<<max_elem;
                    max_elem=it->second;
                    i = it->first;
                    cout<<i;
                }
                
            }
            cout<<i;
            ans.push_back(i);
            um.erase(i);
            j++;

        }
        return ans;
    }
int main() {
    vector<int>a={3,0,1,0};
    vector<int>b=topKFrequent(a,1);
    for(auto i:b){
        cout<<i;
    }
    // cout << "" << endl;
    return 0;
}