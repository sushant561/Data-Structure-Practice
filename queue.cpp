// A Queue is a linear data structure that follows the rule: FIFO ( first in, first out )

// Queue implementation using Array

#include <iostream>
using namespace std;

#define MAX 5

class Queue{
    int arr[MAX];
    int front, rear;

    public:
        Queue() {
            front = -1;
            rear = -1;
        }

        bool isEmpty() {return front == -1;}
        bool isFull() {return rear == MAX - 1;}

        void enqueue(int x){
            if(isFull()){
                cout<<"Queue is full"<<endl;
                return;
            }
            if(isEmpty()) {
                front = 0;
            }
            arr[++rear] = x;
        }

        void dequeue(){
            if(isEmpty()){
                cout<<"Queue is Empty"<<endl;
                return;
            }
            cout<<"removed element: "<<arr[front]<<endl;

            if(front == rear){
                front = rear = -1;
            }else{
                front++;
            }
        }

        int peek(){
            if(!isEmpty()){
                cout<<arr[front]<<endl;
            }else{
                return -1;
            }
        }

        // Display the values
        
        void display(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
                return;
            }
            for(int i = front; i<=rear; i++){
                cout<<arr[i]<< " ";
            }
            cout<<endl;
        }
};

int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.display();

    q.peek();
    q.dequeue();
    q.display();

    return 0;
}