#include <iostream>

using namespace std;

#define MAX 3

class Stack {
  public:
    int array[MAX], top;
    void push();
    void pop();
    void traversal();
};

void Stack::push() {
  int item;
  if (top == MAX-1)
    cout << "Stack Overflow";
  else {
    cout << "Enter the element: ";
    cin >> item;
    top++;
    array[top] = item;
  }
}

void Stack::pop() {
  int item;
  if (top == -1)
    cout<<"Stack Underflow";
  else {
    item = array[top];
    top--;
    cout<< endl << item << " is deleted";   
  }
}

void Stack::traversal() {
  int i;
  if (top == -1)
    cout << "Stack is empty";
  else {
    cout << "\nElements are: ";
    for (i = top; i >= 0; i--) 
      cout << endl << array[i]; 
    cout << endl;
  }
}

int main() {
  Stack stack;
  int ch;
  stack.top = -1;
  cout << "\t Stack Operations" << endl;
  cout << "\t -----------------" << endl;
  while (1) {
    cout << "\nMenu \n1. Push \n2. Pop \n3. Traversal \n4. Exit \n";
    cout << "Enter your choice: ";
    cin >> ch;
    switch (ch) {
      case 1: 
        stack.push();
        break;
      case 2: 
        stack.pop();
        break;  
      case 3:
        stack.traversal();
        break;
      case 4: 
        return 0;
    }
  }
  return 0;
}
