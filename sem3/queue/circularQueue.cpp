#include <iostream>

using namespace std;

#define MAX 5

class Circular {
    public:
        int front, rear, a[MAX];
        void insertion();
        void deletion();
        void traversal();
        Circular() {
            front = rear = 0;
        }
};

void Circular::insertion() {
    int item;
    if (front == rear % MAX + 1) {
        cout << "Queue is full";
        return;
    } else if (rear == 0) {
        front = rear = 1;
    } else {
        rear = (rear % MAX) + 1;
    }
    cout << "Enter the item to be inserted: ";
    cin >> item;
    a[rear] = item;
}

void Circular::deletion() {
    int item;
    if (front == 0) {
        cout << "Queue is empty";
        return;
    }
    item = a[front];
    if (front == rear) 
        front = rear = 0;
    else 
        front = front % MAX + 1;
    cout << item << " is deleted";
}

void Circular::traversal() {
    int i;
    if (front == 0) {
        cout << "Queue is empty";
        return;
    }
    cout << "The elements are: ";
    if (rear < front) {
        for (i = 1; i <= rear; i++)
            cout << a[i];
        for (i = rear + 1; i < front; i++)
            cout << " - ";
        for (i = front; i <= MAX; i++)
            cout << a[i];
    } else {
        for (i = 1; i < front; i++)
            cout << " - ";
        for (i = front; i <= rear; i++)
            cout << a[i];
        for (i = rear + 1; i <= MAX; i++)
            cout << " - ";
    }
}

int main() {
    int ch;
    Circular c;
    cout << "Circular Queue";
    while (1) {
        cout << endl << "1. Insertion";
        cout << endl << "2. Deletion";
        cout << endl << "3. Traversal";
        cout << endl << "4. Exit";
        cout << endl << "Enter your choice: ";
        cin >> ch;
        switch(ch) {
            case 1: c.insertion(); break;
            case 2: c.deletion(); break;
            case 3: c.traversal(); break;
            case 4: return 0;
            default: cout << "Invalid choice";
        }
    }
    return 0;
}