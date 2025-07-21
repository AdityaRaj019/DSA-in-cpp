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
// void isAlnum(char c){
//     if(c==" "||c=="\t"||c=="\n"||c=="\r"||c=="@"||c=="#"||c==
// }
bool palin(string s)
{
    int n = s.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        while ((i < j) && ((s[i] >= 32 && s[i] <= 47) || (s[i] >= 58 && s[i] <= 64) || (s[i] >= 91 && s[i] <= 96) || (s[i] >= 123 && s[i] <= 126)))
        {
            i++;
        }
        while (i < j && ((s[j] >= 32 && s[j] <= 47) || (s[j] >= 58 && s[j] <= 64) || (s[j] >= 91 && s[j] <= 96) || (s[j] >= 123 && s[j] <= 126)))
        {
            j--;
        }
        if (i < j && (toLower(s[i]) != toLower(s[j])))
        {
            return false;
        }
        i++;
        j--;
        // else if(toLower(s[i])!=toLower(s[j])
    }
    return true;
}

using namespace std;

int main()
{
    cout<< palin("A man, a plan, a canal: Panama");

    // cout << "Hello, World!" << endl;
    return 0;
}