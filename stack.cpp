// Stack implementation using array
#include <iostream>
using namespace std;

#define MAX 5

class Stack{
    int arr[MAX];
    int top;

    public:
        Stack() {top = -1;}

        bool isEmpty() {return top == -1;}
        bool isFull() {return top == MAX-1;}

        void push(int x){
            if(isFull()){
                cout<<"Stack overflow "<<endl;
                return;
            }
            arr[++top] = x;
        }

        void pop(){
            if(isEmpty()){
                cout<<"Stack UnderFlow"<<endl;
                return;
            }
            top--;
        }

        int peek(){
            if(!isEmpty()){
                return arr[top];
            }else{
                return -1;
            }
        }

        // Display the Values

        void display(){
            for(int i = top; i>=0; i--){
                cout<<arr[i]<< " ";
            }
            cout<<endl;
        }
};

int main(){

    Stack s;
    s.push(100);
    s.push(200);
    s.push(300);

    s.display();

    s.pop();
    s.push(400);
    s.display();

    cout<<"Peek value is : "<<s.peek();
    return 0;
}


// Stack implementation using Linked List

// struct Node{
//     int data;
//     Node* next;
// };

// class Stack{
//     Node* top;

//     public:
//         Stack() {top = NULL;}

//         void push(int x){
//             Node* newNode = new Node();
//             newNode->data = x;
//             newNode->next = top;
//             top = newNode;
//         }

//         void pop(){
//             if(top == NULL){
//                 cout<<"stack is Empty"<<endl;
//                 return;
//             }
//             Node* temp = top;
//             top = top->next;
//             delete temp;
//         }

//         int peek(){
//             if(top != NULL){
//                 return top->data;
//             }else{
//                 return -1;
//             }
//         }

//         void display(){
//             Node* temp = top;
//             while(temp != NULL){
//                 cout<<temp->data<<" ";
//                 temp = temp->next;
//             }
//             cout<<endl;
//         }

// };

// int main(){

//     Stack s;
//     s.push(500);
//     s.push(600);
//     s.push(700);

//     s.display();

//     s.pop();
//     s.push(800);
//     s.display();

//     cout<<"Peek value is : "<<s.peek();
//     return 0;
// }