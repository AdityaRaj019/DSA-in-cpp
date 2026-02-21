#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

// stack<int>create()

stack<int>sortSt(stack<int>&st){
    stack<int>temp;
    while(!st.empty()){
        int x = st.top();
        // temp.push(k);
        st.pop();
        // k = st.top();
        while(!temp.empty() && temp.top()>x){
            st.push(temp.top());
            temp.pop();
        }
        temp.push(x);
    }
    return temp;
}

void print(stack<int>&st){
    if(st.empty())return;
    int n = st.size();
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main() {
    stack<int>st;
    int n;
    cin>>n;
    int k;
    for(int i = 0;i<n;i++){
        cin>>k;
        st.push(k);
    }
    stack<int>ans =st;
    print(ans);
    stack<int>res = sortSt(st);
    print(res);


    // cout << "" << endl;
    return 0;
}