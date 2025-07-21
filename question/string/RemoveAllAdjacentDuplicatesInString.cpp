#include <iostream>
#include <vector>

using namespace std;

string removeDuplicates(string c)
{
    string res = "";
    res.push_back(c[0]);
    int j = 0;
    for (int i = 1; i < c.size(); i++)
    {
        if (c[i] != res[res.size() - 1])
        {
            res.push_back(c[i]);
            j++;
        }
        else
        {
            j--;
            res.pop_back();
        }
    }
    return res;
}
int main()
{
    cout<< removeDuplicates("azxxzy");

    // cout << "Hello, World!" << endl;
    return 0;
}