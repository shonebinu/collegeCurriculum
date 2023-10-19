#include <iostream>

using namespace std;

struct Node {
    int item;
    struct Node link;
};

typedef struct Node node;

class Queue {
    public:
        node *ptr, *temp, *rear, *front;

        void insertion();
        void deletion();
        void traversal();

        Queue() {
            front = rear = 0;
        }
};

void Queue::insertion() {
    int value;
    cout << "Enter item: ";
    cin >> value;
    ptr = new node;
    ptr -> item = value;
    ptr -> link = 0;
    if (rear == 0) 
        rear = front = ptr;
    else {
        rear -> link = ptr;
        rear = ptr;
    } 
}

void Queue::deletion() {
    if (front == 0) {
        cout << "Empty" << endl;
        return;
    }
    temp = front;

    if (rear == front) 
        rear = front = 0;
    else 
        front = front -> link;
    
    cout << temp -> item << " is deleted" << endl;
    delete(temp);
}

void Queue::traversal() {
    if (front == 0) 
        cout << "Empty";
    else {
        cout << "The elements are: " << endl;
        ptr = front;
        while (ptr != 0) {
            cout << ptr -> item << endl;
            ptr = ptr -> link;
        }
    }
}

int main() {
    Queue ob;
    int ch;

    while(true) {
        cout << "1. Insertion" << endl << "2. Deletion" << endl "3. Traversal" << endl << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> ch;

        switch(ch) {
            case 1: ob.insertion(); break;
            case 2: ob.deletion(); break;
            case 3: ob.traversal(); break;
            case 4: return 0;
            default: cout << "Invalid choice" << endl;
        }
    }
}