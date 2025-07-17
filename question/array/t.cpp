#include <iostream>
#include <vector>

using namespace std;

int subarray(vector<int> nums)
{
    int n = nums.size();
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << nums[i];
            }
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}
int main()
{
    vector<int> nums = { 1 , 3 , 4 , 6 , 7};
    cout << subarray(nums);
    
    return 0;
}

