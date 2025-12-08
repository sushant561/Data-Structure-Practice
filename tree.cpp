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

// finding minimum value
int findMin(Node* root){
    while(root && root->left != NULL){
        root = root->left;
    }
    return root->data;
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

// searching elemnet in tree
bool search(Node* root, int key){
    if(root == NULL){
        return false;
    }
    if(root->data == key){
        return true;
    };
    if(key < root->data){
        return search(root->left, key);
    }else{
        return search(root->right, key);
    };
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

    cout<<"Min Value : ";
    cout<<findMin(root);
    cout<<endl;

    cout<<"is 5 is present is Tree : "<<search(root, 5)<<endl;
    cout<<"is 17 is present is Tree : "<<search(root, 17);

    return 0;
}