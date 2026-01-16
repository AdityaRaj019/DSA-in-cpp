#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
string reverseWords(string s)
{
    // int n = s.length();
    stringstream ss(s);
    string word;
    vector<string> words;
    while (ss >> word)
    {
        words.push_back(word);
    }

    reverse(words.begin(), words.end());
    int n = words.size();
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        ans += words[i];
        if (i < n - 1)
        {
            ans += " ";
        }
    }
    return ans;
}

int main()
{

    cout << "" << endl;
    return 0;
}