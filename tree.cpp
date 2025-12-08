#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = right = NULL;
    }
};

// insert function
Node* insert(Node* root, int value){
    if(root == NULL){
        return new Node(value);
    }
    if(value < root->data){
        root->left = insert(root->left, value);
    }else{
        root->right = insert(root->right, value);
    };

    return root;
};

// Depth First Traversal Algorithm
// Inorder traversal (left->root->right)
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
};

// Preorder traversal (root->left->right)
void preorder(Node* root){
    if(root == NULL){
        return;
    };
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
};

// Postorder traversal (left->right->root)
void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
};

int main(){
    Node* root = NULL;

    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 2);
    root = insert(root, 7);
    root = insert(root, 20);

    cout<<"Inorder : ";
    inorder(root);
    cout<<endl;

    cout<<"Preorder : ";
    preorder(root);
    cout<<endl;

    cout<<"Postorder : ";
    postorder(root);
    cout<<endl;

    return 0;
}