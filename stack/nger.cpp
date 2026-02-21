#include <iostream>
#include<vector>
#include<bits/stdc++.h>


using namespace std;

 vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        stack<int>st;
        int n = arr.size();
        vector<int>ans(n);
        for(int i =n-1;i>=0;i--){
            while(!st.empty()&&(st.top()<=arr[i])){
                st.pop();
            }
            ans[i]  = st.empty()?-1:st.top();
            st.push(arr[i]);
        }
        return ans;
    }
int main() {
    vector<int>arr;
    int k;
    while(cin>>k){
        arr.push_back(k);
    }
    vector<int>res = nextSmallerEle(arr);
    // cout << "" << endl;
    for(int i:res){
        cout<<i<<" ";
    }
    return 0;
}
