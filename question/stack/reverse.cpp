#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
void solve(stack<int> &st, stack<int> &ans)
{
    if (st.empty())
    {
        // st = ans;
        return ;
    }
    ans.push(st.top());
    st.pop();
    solve(st, ans);
}
void reverse(stack<int> &st)
{
    // code here
    // if(st.empty())return ;
    // stack<int>ans;
    // while(!st.empty()){
    //     ans.push(st.top());
    //     st.pop();
    // }
    // st = ans;
    stack<int> ans;
    solve(st, ans);
    st = ans;
}

int main()
{
    stack<int> st;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        st.push(i);
    }
    reverse(st);
    // stack<int> ans  = st;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    // cout << "" << endl;
    return 0;
}