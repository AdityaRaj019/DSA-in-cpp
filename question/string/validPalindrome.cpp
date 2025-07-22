#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;
char toLower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool isAlnum(char c){
    if((c>='a' && c<='z') || (c>='A' && c<='Z' )|| (c>='0' && c<='9' )) return 1;
    return 0;
}
bool palin(string s)
{
    int n = s.size();
    string temp = "";
    // int i = 0;
    // int j = n - 1;
    // while (i < j)
    // {
    //     while ((i < j) && ((s[i] >= 32 && s[i] <= 47) || (s[i] >= 58 && s[i] <= 64) || (s[i] >= 91 && s[i] <= 96) || (s[i] >= 123 && s[i] <= 126)))
    //     {
    //         i++;
    //     }
    //     while (i < j && ((s[j] >= 32 && s[j] <= 47) || (s[j] >= 58 && s[j] <= 64) || (s[j] >= 91 && s[j] <= 96) || (s[j] >= 123 && s[j] <= 126)))
    //     {
    //         j--;
    //     }
    //     if (i < j && (toLower(s[i]) != toLower(s[j])))
    //     {
    //         return false;
    //     }
    //     i++;
    //     j--;
    //     // else if(toLower(s[i])!=toLower(s[j])
    // }
    for(int i  = 0 ; i < n ;i++){
        if(isAlnum(s[i])){
            temp.push_back(toLower(s[i]));
        }
    }
    string rev = temp;
    reverse(rev.begin(),rev.end());
    if(temp==rev){
        return true;
    }
    return false;
}

using namespace std;

int main()
{
    cout<< palin("A man, a plan, a canal: Panama");


    // cout << "Hello, World!" << endl;
    return 0;
}