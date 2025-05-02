//First and last position of element in a sorted array

#include <iostream>
#include<vector>

using namespace std;
int focurrence(int arr[],int n,int k){
    int s = 0;
    int e = n-1;
    int ans = -1;
    while (s<=e)
    {
        int mid = s+(e-s)/2;
        /* code */
        if(arr[mid]==k){
            ans = mid;
            e = mid-1;

        }
        else if (arr[mid]<k)
        {
            s = mid+1;
        }
        else{
            e = mid -1;
        }
       
         mid = s+(e-s)/2;
    }
    return ans;
}

int lastocuu(int arr[],int n ,int k){
    int s = 0;
    int e = n-1;
    int ans = -1;
    while (s<=e)
    {
        int mid = s+(e-s)/2;
        /* code */
        if(arr[mid]==k){
            ans = mid;
            s = mid+1;

        }
        else if (arr[mid]<k)
        {
            s = mid+1;
        }
        else{
            e = mid -1;
        }
       
         mid = s+(e-s)/2;
    }
    return ans;
}

int main() {
    int arr[8] = {0,0,1,1,2,2,2,2};
    cout<<focurrence(arr,8,2)<<" "<< lastocuu(arr,8,2);
    // cout << "Hello, World!" << endl;
    return 0;
}