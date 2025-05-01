//Search in a rotated sorted array

#include <iostream>
#include<vector>


using namespace std;
int binary_search(vector<int>arr ,int st,int en ,int k){
    int s = st;
    int e = en;

    int mid = s+ (e - s) / 2;
    while (s<=e)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        if (arr[mid] > k)
        {
            e= mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s+ (e - s) / 2;
    }
    return -1;
}
int getPivot(vector<int>arr,int n){
    int s = 0;
    int e =n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int search(vector<int>arr , int k,int n){
    int pivot = getPivot(arr,n);
   
    if(k>=arr[pivot] && k <=arr[n-1]){
        return binary_search(arr,pivot,n-1,k);
    }
    else{
        return binary_search(arr,0,pivot-1,k);
    }
    return -1;
}
int main() {
    vector<int>arr = {4,5,6,7,0,1,2};
    int n = arr.size();
    cout<<search(arr,0,n);

    return 0;
}