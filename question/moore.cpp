// max occuring of a element in a array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Moore voting algo

int maxelement(vector<int>nums){
    int ans = 0;
    int freq = 0;
    for(int i = 0; i<nums.size();i++){
        if( freq == 0 ){
            ans = nums[i];
            
        }
        if(ans == nums[i]){

            freq++;
        }
        else{
            freq--;
        }

    }
    return ans;
}


int main()
{
   
    //{2, 2, 2, 3, 3, 2, 2, 4, 5};
    vector<int> nums = {-1,  -2, -2,  -3, -3, -1, -1, 5, 5};
    //{5, 5, 5, 5, 5, 5, 10, 10, 10, 20, 20, 20, 20, 20, 20};
    //{10, 10, 10, 20, 20, 30, 30, 30, 30, 30, 40, 40, 40, 40, 50};

    cout << maxelement(nums);
    return 0;
}
// optimise

/*int maxocc1(vector<int> nums)
{
    if (nums.empty())
        return -1;
    int ans = nums[0];
    int n = nums.size();

    sort(nums.begin(), nums.end());

    int floor = n / 2;

    int freq = 1;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {

            // if (freq > floor)
            // {
            //     return nums[i - 1];
            // }
            freq = 1;
            ans = nums[i] ;
        }
        if (freq > floor)
        {
            return ans;
        }
    }
        return -1;
}*/

// brute force
/*int maxocc(vector<int> nums)
{
    int n = nums.size(); int ans;
    int floor = n / 2;
    for (int val : nums)
    {
        int count = 1;
        for (int el : nums)
        {
            if (val == el)
            {
                count++;
                ans = val;
            }
        }
        if (count>=floor)
        {
            return ans ;
        }

    }
    return -1 ;
}*/
