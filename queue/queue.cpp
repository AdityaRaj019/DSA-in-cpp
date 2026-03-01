#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

class Queue{
    int qfront;
    int qrear;
    int *arr;
    int size;
public:
    Queue(int n){
        size = n;
        arr = new int[size];
        qfront = 0;
        qrear = 0;
    }
    bool isEmpty(){
        return qfront==qrear;
    }

    bool isFull(){
        return qrear==size;
    }

    void push(int x){
        if(isFull()){
            cout<<"queue is full";
        }else{
            arr[qrear++] = x;
        }
    }

    void pop(){
        if(isEmpty()){
            cout<<"queue is empty";
        }
        // int x = arr[front];
        arr[qfront] = -1;
        qfront++;
        if(qfront==qrear){
            qfront =0;
            qrear =0;
        }
        // return x;
    }
    int front(){
        if(isEmpty()){
            return -1;
        }
        return arr[qfront];
    }

    int rear(){
        if(isEmpty()){
            return -1;
        }
        return arr[qrear-1];
    }
    void display(){
        if(isEmpty()){
            cout<<"Empty";
        }else{
             for(int i = qfront; i < qrear; i++){
                cout << arr[i] << " ";
            }
        }
    }
};
int main() {
      Queue q(7);
      q.push(7);
      q.push(8);
      q.push(9);
      q.pop();
      cout<< q.isEmpty();
    //   q.display();
        // cout << "" << endl;
    return 0;
}