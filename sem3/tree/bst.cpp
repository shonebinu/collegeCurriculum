#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node *lchild, *rchild;
};

typedef struct Node node;

class BST {
    public: 
        int flag;
        node *root, *temp, *ptr;

        BST() {
            root = 0;
            flag = 0;
        }

        void create();
        void insert(node* , node* );
        void inorder(node* );
        void preorder(node* );
        void postorder(node* );
        void search(node*, int);
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

void BST::search(node *p, int x) {
    if (!flag && p) {
        if (p -> data == x)
            flag = 1;
        else {
            search(p -> lchild, x);
            search(p -> rchild, x);
        }
    }
}

int main() {
    int num;
    BST ob;
    ob.create();
    cout << endl << "Enter the element to search: ";
    cin >> num;
    ob.search(ob.root, num);
    if (ob.flag)
        cout << "Successful search";
    else 
        cout << "Unsuccessful search";
    return 0;
}
