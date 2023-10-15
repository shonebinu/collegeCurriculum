#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node *lchild, *rchild;
};

typedef struct Node node;

class BST {
    public: 
        node *root, *temp, *ptr;

        BST() {
            root = 0;
        }

        void create();
        void insert(node* , node* );
        void inorder(node* );
        void preorder(node* );
        void postorder(node* );
};

void BST::create() {
    int item, ch;
    do {
        cout << "Enter Item: ";
        cin >> item;
        ptr = new node;
        ptr -> data = item;
        ptr -> rchild = 0;
        ptr -> lchild = 0;

        if (root == 0)
            root = ptr;
        else
            insert(root, ptr);

        cout << "Do you want to continue(1/0): ";
        cin >> ch;
    }
    while (ch == 1);
    cout << "\nThe inorder traversal is: " << endl;
    inorder(root);
    cout << endl;
    cout << "\nThe preorder traversal is: " << endl;
    preorder(root);
    cout << endl;
    cout << "\nThe postorder traversal is: " << endl;
    postorder(root);
    cout << endl;
}

void BST::insert(node * r, node * p) {
    if (p -> data < r -> data) {
        if (r -> lchild == 0)
            r -> lchild = p;
        else
            insert(r -> lchild, p);
    } else {
        if (r -> rchild == 0)
            r -> rchild = p;
        else
            insert(r -> rchild, p);
    }
}

void BST::inorder(node * p) {
    if (p != 0) {
        inorder(p -> lchild);
        cout << p -> data << "\t";
        inorder(p -> rchild);
    }
}

void BST::postorder(node * p) {
    if (p != 0) {
        postorder(p -> lchild);
        postorder(p -> rchild);
        cout << p -> data << "\t";
    }
}

void BST::preorder(node * p) {
    if (p != 0) {
        cout << p -> data << "\t";
        preorder(p -> lchild);
        preorder(p -> rchild);
    }
}

int main() {
    BST ob;
    ob.create();
    return 0;
}