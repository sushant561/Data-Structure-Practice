#include <iostream>
using namespace std;


// Simple Linked List Node Structure

// struct Node{
//     int data;
//     Node* next;
// };

// int main(){

//     Node* head = new Node();
//     Node* first = new Node();
//     Node* second = new Node();
//     Node* third = new Node();

//     head->data = 7;
//     head->next = first;

//     first->data = 8;
//     first->next = second;

//     second->data = 9;
//     second->next = third;

//     third->data = 10;
//     third->next = NULL;

//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<endl;
//         temp = temp->next;
//     };

//     return 0;
// };


// Doubly Linked List Node Structure

// struct Node{
//     int data;
//     Node* prev;
//     Node* next;
// };


// int main(){

//     Node* head = new Node();
//     Node* second = new Node();
//     Node* third = new Node();

//     head->data = 10;
//     head->prev = NULL;
//     head->next = second;

//     second->data = 20;
//     second->prev = head;
//     second->next = third;

//     third->data = 50;
//     third->prev = second;
//     third->next = head;

//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<endl;
//         temp = temp->next;
//     };
//     return 0;
// }

// Circular Linked List Node Structure

struct Node{
    int data;
    Node* next;
};

int main(){

    Node* head = new Node();
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 7;
    head->next = first;

    first->data = 8;
    first->next = second;

    second->data = 9;
    second->next = third;

    third->data = 10;
    third->next = head;

    Node* temp = head;
    do{
        cout<<temp->data<<endl;
        temp = temp->next;
    }while(temp != head);

    return 0;
};