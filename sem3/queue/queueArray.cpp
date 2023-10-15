#include <iostream>

#define MAX 5 

using namespace std;

class Queue {
  public: 
    int queue[MAX], rear, front;

    void enqueue();
    void dequeue();
    void traversal();

    Queue() {
      front = rear = 0;
  }
};

void Queue::enqueue() {
  int item;

  if (rear == MAX - 1) {
    cout << endl << "Queue is full";
    return;
  }

  if (rear == 0)
    rear = front = 1;

  else 
    rear++;

  cout << "Enter the item to insert: ";
  cin >> item;
  queue[rear] = item;
}


void Queue::dequeue() {
  int item;

  if (front == 0) {
    cout << endl << "Queue is empty";
    return;
  }

  item = queue[front];

  if (front == rear) 
    front = rear = 0;

  else 
    front++;

  cout << "Item is deleted";
}


void Queue::traversal() {
  int i;

  if (front == 0)
    cout << endl << "Queue is empty";

  else {
    cout << endl << "Elements are: " << endl;

    for (i = front; i <= rear; i++)
      cout << queue[i] << endl;
  }
}

int main() {
  Queue q;
  int c;

  while (true) {
    cout << "\n\t MENU \n";
    cout << "1. INSERTION \n2. DELETION \n3. TRAVERSAL \n4. EXIT \n";
    cout << "Enter the choice: ";
    cin >> c;

    switch(c) {
      case 1: q.enqueue(); break;
      case 2: q.dequeue(); break;
      case 3: q.traversal(); break;
      case 4: return 0;
      default: cout << "Invalid choice";
    }
  }
}
