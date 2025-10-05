#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
void solve(vector<int>arr,vector<int>op,int index,vector<vector<int>>&ans){
    if(index>=arr.size()){
        ans.push_back(op);
        return ;
    }
    solve(arr,op,index+1,ans);
    op.push_back(arr[index]);
    solve(arr,op,index+1,ans);
}

vector<vector<int>>powerset(vector<int>arr){
    int n = arr.size();
    vector<vector<int>>ans;
    vector<int>op;
    int index =0;
    solve(arr,op,index,ans);
    return ans;

}


int main() {
      vector<int>arr = {1,2,3};
      vector<vector<int>>ans = powerset(arr);
      for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
      }
    // cout << "" << endl;
    return 0;
}