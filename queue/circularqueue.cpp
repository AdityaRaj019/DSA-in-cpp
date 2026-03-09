#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
class MyCircularQueue {
    int* arr;
    int size;
    int front;
    int rear;

public:
    MyCircularQueue(int k) {
        size = k;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool enQueue(int value) {
        if(isFull()) {
            return false;
        }
        // else if(front == -1){
        //     front = rear = 0;
        // }else if((rear==size-1)&&front!=0){
        //     rear = 0;
        // }else{
        //     rear++;
        // }
        // arr[rear] = value;
        // return true;
        if(front==-1){
            front=rear=0;
        }else{
            rear = (rear+1)%size;
        }
         arr[rear] = value;
        return true;
        
    }

    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        if(front==rear){
            front=rear=-1;
        }else{
            front = (front+1)%size;
        }

        // }else if(front==rear){
        //     front = -1;
        //     rear=-1;
        // }else if(front==size-1){
        //     front=0;
        // }else{
        //     front++;
        // }
        return true;

    }

    int Front() {
        if(isEmpty()){
            return -1;
        }else{
            return arr[front];
        }
    }

    int Rear() {
        if(isEmpty()){
            return -1;
        }else{
            return arr[rear];
        }
    }

    bool isEmpty() {
        if(front ==-1){
            return true;
        }
        return false;
    }

    bool isFull() {
        // if ((front == 0 && rear == size - 1) ||
        //     rear == (front - 1) % (size)) {
        //     return true;
        // }
        if((rear+1)%size==front){
            return true;
        }
        return false;
    }
};


int main() {
      
    cout << "" << endl;
    return 0;
}