#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
int partition(vector<int> &arr,int s,int e){
    int pivot = arr[s];
    int cnt=0;
    for(int  i = s+1;i<=e;i++){
        if(arr[i]<=pivot) cnt++;
    }
    int pvtidx = s+cnt;
    swap(arr[pvtidx],arr[s]);
    int i = s;
    int j = e;
    while(i<pvtidx&&j>pvtidx){
        if(arr[i]>=pivot&&arr[j]<=pivot){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }else if(arr[i]<pivot)i++;
        else j--;
    }
    
    return pvtidx;



}
void quicksort(vector<int> &arr,int s,int e){
    if(s>=e) return ;
    int p = partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}

int main() {
    vector<int>arr = {80,90,40,50,70};
    quicksort(arr,0,arr.size()-1); 
    for(int i = 0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << "" << endl;
    return 0;
}