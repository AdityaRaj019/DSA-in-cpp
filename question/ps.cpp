// pair sum or 2 sum
#include <iostream>
#include <vector>
using namespace std;

/* vector<int> pairSum1(vector<int> nums, int target) {
    vector<int> ans;

    // Loop through the vector and check all pairs
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                /*ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                ans.push_back(i);
                ans.push_back(j);
                // Return if you're only interested in the first valid pair
                return ans;
            }
        }
    }

    return ans;  // Return empty vector if no pair is found
}*/
// OPTIMISE

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    

    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int pairsum = nums[i] + nums[j];
        if (pairsum > target)
        {
            j--;
        }
        else if(pairsum < target)
        {
            i++;
        }
        else
        {

            ans.push_back(i);
            ans.push_back(j);
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
        }
    }
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int target = 9;
    vector<int> ans = pairSum(nums, target);

    // Check if at least two elements exist before accessing them
    if (ans.size() >= 2)
    {
        for(int i : ans){
            cout<< "  " << i;
        }
    }
    else
    {
        cout << "No pair found" << endl; // Print message if no pair was found
    }

    return 0;
}
