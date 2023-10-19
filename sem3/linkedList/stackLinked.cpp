#include <iostream>

using namespace std;

struct Node {
    int item;
    struct Node *link;
};

typedef struct Node node;

class Stack {
    public:
        node *ptr, *temp, *top;
        
        void push();
        void pop();
        void traversal();

        Stack() {
            top = 0;
        }
};

int main() {
    Stack ob;
    int ch;
    
    while (true) {
        cout << "1.Push" << endl << "2. Pop" << endl << "3. Traversal" << endl << "4. Exit" << endl; 
        cout << "Enter Choice: ";
        cin >> ch;

        switch(ch) {
            case 1: ob.push(); break;
            case 2: ob.pop(); break;
            case 3: ob.traversal(); break;
            case 4: return 0;
            default: cout << "Invalid choice" << endl;
        }
    }
}

void Stack::push() {
    int value;
    cout << "Enter the item: ";
    cin >> value;
    ptr = new node;
    ptr -> item = value;
    ptr -> link = top;
    top = ptr;
}

void Stack::pop() {
    if (top == 0)
        cout << "Stack is empty" << endl;
    else {
        temp = top;
        top = top -> link;
        cout << temp -> item << " is deleted";
        delete(temp);
    }
}

void Stack::traversal() {
    if (top == 0)
        cout << "Stack is empty";
    else {
        temp = top;
        while (temp != 0) {
            cout << temp -> item << endl;
            temp = temp -> link;
        }
    }
}