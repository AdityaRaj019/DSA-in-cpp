#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
    vector<string> letterCombinations(string digits) {
        // hash table
        vector<string> ht = {"",    "",    "abc",  "def", "ghi",
                             "jkl", "mno", "pqrs", "tuv", "wxyz"};
        int n = digits.size();

        vector<string> ans;

        queue<string> q;
        q.push("");

        while (!q.empty()) {
            string pre = q.front();
            q.pop();

            if (pre.size() == n) {
                ans.push_back(pre);
            } else {
                int digit = digits[pre.size()]-'0';
                if(digit<2 && digit >9)continue;
                for (char c : ht[digit]) {
                    q.push(pre + c);
                }
            }
        }
        return ans;
    }


int main() {
    
    return 0;
}