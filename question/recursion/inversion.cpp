// #include <iostream>
// #include<vector>
// #include<bits/stdc++.h>

// using namespace std;
// // Given an array of integers arr[] of size n, an inversion is defined as a pair of indices (i, j) such that:

// /*0 ≤ i < j < n

// arr[i] > arr[j]

// Your task is to count the total number of inversions present in the array*/
// long long mergeAndCount(vector<int>&arr,int s,int e){
//     long long inv=0;
//     int mid = (s+e)/2;
//     int len1 = mid-s+1;
//     int len2 = e-mid;
//     vector<int>left(len1);
//     vector<int>right(len2);
//     int k = s;
//     for(int i = 0;i<len1;i++){
//         left[i] = arr[k++];
//     }
//     k = mid+1;
//     for(int i = 0;i<len2;i++){
//         right[i] = arr[k++];
//     }
//     int i =0;
//     int j =0;
//      k = s;
//     while(i<len1&&j<len2){
//         if(left[i]<right[j]){
//             arr[k++] = left[i++];
//         }else{
//             arr[k++] = right[j++];
//             inv+=len1-i;
//         }
//     }
//     return inv;

// }
// long long mergesortAndCount(vector<int>&arr,int l,int r){
//     long long inv =0;
//     if(l<r){
//         int mid = (l+r)/2;
//         inv+=mergesortAndCount(arr,l,mid);
//         inv+=mergesortAndCount(arr,mid+1,r);
//         inv+=mergeAndCount(arr,l,r);
    
//     }
//     return inv;
// }

// int main() {
//     vector<int>arr =  {2, 4, 1, 3, 5};
//     cout << mergesortAndCount(arr,0,arr.size()-1) << endl;
//     // cout << "" << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

long long mergeAndCount(vector<int>& arr, int l, int m, int r) {
    long long inv = 0;

    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> left(n1), right(n2);

    for (int i = 0; i < n1; i++) left[i] = arr[l + i];
    for (int j = 0; j < n2; j++) right[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
            inv += (n1 - i);  // all remaining left[i..end] are > right[j]
        }
    }

    while (i < n1) arr[k++] = left[i++];
    while (j < n2) arr[k++] = right[j++];

    return inv;
}

long long mergesortAndCount(vector<int>& arr, int l, int r) {
    long long inv = 0;
    if (l < r) {
        int m = (l + r) / 2;
        inv += mergesortAndCount(arr, l, m);
        inv += mergesortAndCount(arr, m + 1, r);
        inv += mergeAndCount(arr, l, m, r);
    }
    return inv;
}

int main() {
    vector<int> arr = {2, 4, 1, 3, 5};
    cout << mergesortAndCount(arr, 0, arr.size() - 1) << endl;
    return 0;
}
