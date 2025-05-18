#include <iostream>
#include<vector>


using namespace std;
bool ifPossible(int arr[],int n,int m , int mid){
    if(n<m) return false;

    int students=1;
    int pageeCount=0;
    int sum = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid) return false;
        if(pageeCount+arr[i]<=mid){
            pageeCount=arr[i];
        }
        else{
            students++;
            if(students>m||arr[i]>mid) return false;
            pageeCount=arr[i];
        }
    }  
    return true; 
}

int allocateBooks(int arr[], int n, int m) {
    int start = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int end = sum;
    int ans = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(ifPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}

int main() {
      
    cout << "Hello, World!" << endl;
    return 0;
}