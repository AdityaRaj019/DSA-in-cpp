#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
class MyCircularDeque {
    int *arr;
    int size;
    int front;
    int rear;
public:
    MyCircularDeque(int k) {
        size = k;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    
    bool insertFront(int value) {
        if(isFull())return false;
        if(front==-1){
            front = rear = 0;
        }else{
            front = (front-1+size)%size;
        }
        arr[front] = value;
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull())return false;
        if(front==-1){
            front = rear = 0;
        }else{
            rear = (rear+1)%size;
        }
        arr[rear] = value;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()){
            return false;
        }
        if(front == rear){
            front = rear = -1;
        }else{
            front = (front+1)%size;
        }
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty()){
            return false;
        }
        if(front == rear){
            front = rear = -1;
        }else{
            rear = (rear-1+size)%size;
        }
        return true;
    }
    
    int getFront() {
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }
    
    int getRear() {
         if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }
    
    bool isEmpty() {
        if(front==-1){
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if((front==0 && rear==size-1)||(front==rear+1)){
            return true;
        }
        return false;
    }
};


int main() {
      
    cout << "" << endl;
    return 0;
}