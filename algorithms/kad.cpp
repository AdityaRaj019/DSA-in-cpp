// maximun sum of subarray

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// kadans algo

int maxSumofSubarray(vector<int> nums)
{
    int n = nums.size();

    int maxsum = INT_MIN;
    int currsum = 0 ;
    for (int st = 0; st < n; st++)
    {
        currsum += nums[st];
        maxsum = max(currsum, maxsum);
        if(currsum<0){
            currsum=0;
        }
    }
    return maxsum;
}

int main()
{
    vector<int> nums = {-1, -4, 5, 7, -9, 8};
    cout << maxSumofSubarray(nums);
    

    return 0;
}

// brute force

/*int maxSumofSubarray(vector<int> nums)
{
    int n = nums.size();

    int maxsum = INT_MIN ;
    for (int st = 0; st < n; st++)
    {
        int currsum=0;
        for (int end = st; end < n; end++)
        {
            currsum+=nums[end];
            maxsum=max(currsum,maxsum);
        }
    }
    return maxsum ;
}*/
