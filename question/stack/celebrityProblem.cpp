#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int celebrity(vector<vector<int>>& mat) {
        // code here
        int row = mat.size();
        int col = mat[0].size();
        
        stack<int>st;
        
        for(int i  = 0;i<row;i++){
            st.push(i);
        }
        while(st.size()!=1){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if(mat[a][b]==1){
                st.push(b);
            }else{
                st.push(a);
            }
        }
        int candidate = st.top();
        for(int j = 0 ;j<col;j++){
            if(j!=candidate && mat[candidate][j]==1)return -1;
        }
        
        for(int i  =0 ;i<row;i++){
            if(i!=candidate && mat[i][candidate]==0)return -1;
        }
        return candidate;
    }

int main() {
      
    cout << "" << endl;
    return 0;
}