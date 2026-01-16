#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
void solve(string digits, vector<string> &ans, string &op, vector<string> ht, int index)
{
    if (index >= digits.size())
    {
        ans.push_back(op);
        return;
    }
    int digit = digits[index] - '0';
    string val = ht[digit];
    for (int i = 0; i < val.size(); i++)
    {
        op.push_back(val[i]);
        solve(digits, ans, op, ht, index + 1);
        op.pop_back();
    }
}
vector<string> letterCombinations(string digits)
{
    // hash table
    vector<string> ht = {"", "", "abc", "def", "ghi",
                         "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int n = digits.size();

    vector<string> ans;
    string op = "";
    int index = 0;
    solve(digits, ans, op, ht, index);
    return ans;
}

int main()
{
    string a = "23";
    vector<string>res = letterCombinations(a);
    for(auto c:res){
        cout<<c<<" ";
    }
    // cout << letterCombinations(a)<< endl;
    return 0;
}