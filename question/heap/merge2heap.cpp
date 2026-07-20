#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
void heapify(vector<int>&arr,int n, int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left < n && arr[left] > arr[largest] ){
        largest = left;
    } 
    if(right < n && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
void buildHeap(vector<int>&arr,int n){
    for(int i = n/2-1 ; i>=0;i--){
        heapify(arr,n,i);
    }
}
vector<int>mergeHeap(vector<int>&root1 , vector<int>&root2){
    vector<int>merged = root1;
    merged.insert(merged.end(),root2.begin(),root2.end());
    int n = merged.size();
    buildHeap(merged,n);
    return merged;
}
int main() {
    
    vector<int>root1(5),root2(3);
    for(int i = 0 ; i<root1.size();i++){
        cin >> root1[i];
    }
    for(int i = 0 ; i<root2.size();i++){
        cin >> root2[i];
    }
    vector<int>ans = mergeHeap(root1,root2);
    for(int i :ans){
        cout << i << " ";
    }
    // cout << "" << endl;
    return 0;
}