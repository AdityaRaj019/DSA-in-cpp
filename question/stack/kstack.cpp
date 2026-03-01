#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
class kStacks {

    // main array to store elements
    int *arr;
    int *top;
    int *next;
     
    int n,s;
    
    int freeSpot;

  public:
    kStacks(int S , int N) {
        // initialize data structures for k stacks
        s = S; //ize
        n = N; // n stacks
        
        arr = new int[s];
        top = new int[n];
        next = new int[s];
        
        
        // intialize top
        // memset(top,-1,sizeof(top));
        
        for(int i = 0;i<n;i++){
            top[i] = -1;
        }
        
        
        // initialize next
        for(int i = 0;i<s;i++){
            next[i] = i+1;
        }
        
        //update last element of next
        
        next[s-1] = -1;
    
        // intialize free spot    
        freeSpot = 0;
    
        
    }

    void push(int x, int i) {
        // push element x into stack i
        // check for overflow
        if(freeSpot == -1){
            return;
        }
        
        // find index;
        
        int index = freeSpot;
        
        // update freeSpot
        
        freeSpot = next[index];
        
        // push in the stack
        
        arr[index] = x;
        
        // update next (if there is some value already in the stack the next of that index points to element before top 
        //              which the next element)
        
        next[index] = top[i];
        
        // update top
        
        top[i] = index;
        
    }

    int pop(int i) {
        // pop element from stack i
        
        // check underflow
        
        if(top[i]==-1){
            return -1;
        }
        // find current top
        int index = top[i];
        //update top to point to next element in stack
        top[i] = next[index];
        //update next freespot of this index because this index is going to be empty
        next[index] = freeSpot;
        //update freespot cause this index is now free
        freeSpot = index;
        
        return arr[index];
        
    }
};

int main() {
      
    cout << "" << endl;
    return 0;
}