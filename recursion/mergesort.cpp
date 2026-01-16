#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
void merge(vector<int> &arr,int s,int e){
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;
    vector<int>first(len1);
    vector<int>second(len2);
    int k=s;
    for(int i=0;i<len1;i++){
        first[i] = arr[k++];
        // cout<<first[i]<<" ";
    }
    k=mid+1;
    for(int i=0;i<len2;i++){
        second[i] = arr[k++];
        cout<<second[i]<<" ";
    }
    int i=0;
    int j=0;
    k=s;
    while(i<len1 && j<len2){
        if(first[i]<second[j]){
            arr[k++] = first[i++];
        }
        else{
            arr[k++] = second[j++];
        }
    }
    while(i<len1){
        arr[k++] = first[i++];
    }
    while(j<len2){
        arr[k++] = second[j++];
    }

}
void rec_merge(vector<int> &arr,int s,int e){
    if(s>=e){
        return ;
    }
    int mid = (s+e)/2;
    rec_merge(arr,s,mid);
    rec_merge(arr,mid+1,e);
    merge(arr,s,e);

}

int main() {
      vector<int>arr = {7,5,8,3,1};
      rec_merge(arr,0,arr.size()-1);
    // cout << "" << endl;
    // for(int i = 0;i<arr.size();i++){
    //     cout << arr[i] << " ";
    // }
    cout << endl;
    return 0;
}