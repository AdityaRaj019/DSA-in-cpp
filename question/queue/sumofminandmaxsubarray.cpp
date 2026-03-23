#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int SumOfKsubArray(vector<int>arr, int N, int k){
    // 2 deque

    deque<int>s,g;
    int sum = 0;

    // initial window 

    for(int i =0;i<k;i++){
        // Remove all useless element
        // Remove all greater element from s(Smaller element only queue or in increasing order)
        while(!s.empty() && arr[i] <= arr[s.back()]){
            s.pop_back();
        }
        //Remove all smaller element from g(Greater element only queue or in decreasing order)
        while(!g.empty() && arr[i] >= arr[g.back()]){
            g.pop_back();
        }

        // push the index

        s.push_back(i);
        g.push_back(i);
    }
    // calculate intitial window sum
    sum+=arr[s.front()]+arr[g.front()];
    // remaning window

    for(int i = k ;i<N;i++){
        // check if the front is out of window
        if( !s.empty() && i-k >= s.front()){
            s.pop_front();
        }
        if(!g.empty() && i-k >= g.front()){
            g.pop_front();
        }
        //Remove the useless and push the current index like above

        while(!s.empty() && arr[i]<=arr[s.back()]){
            s.pop_back();
        }
        while(!g.empty() && arr[i]>=arr[g.back()]){
            g.pop_back();
        }

        s.push_back(i);
        g.push_back(i);
        sum+= arr[s.front()] + arr[g.front()];
    }
    return sum;

    
}
int main() {
    int n,k;
    cin >> n >> k;
    vector<int>arr(n);
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }
    cout << SumOfKsubArray(arr, n, k) ;
    // return 0;
    // cout << "" << endl;
    return 0;
}