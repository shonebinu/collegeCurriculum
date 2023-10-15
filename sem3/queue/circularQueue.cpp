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
        front = rear = -1; // Initialize front and rear to -1 for an empty queue
    }
};

void Circular::insertion() {
    int item;
    if ((rear + 1) % MAX == front) {
        cout << "Queue is full";
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAX;
    }
    cout << "Enter the item to be inserted: ";
    cin >> item;
    a[rear] = item;
}

void Circular::deletion() {
    if (front == -1) {
        cout << "Queue is empty";
        return;
    }
    int item = a[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
    cout << item << " is deleted";
}

void Circular::traversal() {
    if (front == -1) {
        cout << "Queue is empty";
        return;
    }
    cout << "The elements are: ";
    int i = front;
    do {
        cout << a[i] << " ";
        i = (i + 1) % MAX;
    } while (i != (rear + 1) % MAX);
    cout << endl;
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