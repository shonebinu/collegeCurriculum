#include <iostream>

using namespace std;

#define MAX 25

class Stack {
  public:

    char stack[MAX];
    int top = -1;

    void push(char);
    char pop();    
};

int main() {
  char toRev[MAX];
  cout << "Enter the string to reverse: ";
  cin.getline(toRev, MAX); // Read the entire input line
  
  Stack s;
  int length = 0;
  for (int i = 0; toRev[i] != '\0'; i++) {
    s.push(toRev[i]);
    length++;
  }

  char rev[MAX];
  for (int i = 0; i < length; i++) 
    rev[i] = s.pop();
  rev[length] = '\0'; // Add the null - terminator

  cout << "The Reverse of the given string is: " << rev << endl;
  
  return 0;
}

void Stack::push(char n) {
  if (top == MAX - 1) 
    cout << "Stack Overflow";
  else {
    top++;
    stack[top] = n;
  }
}

char Stack::pop() {
  char item;
  if (top == -1) {
    cout << "Stack Underflow";
    return '\0';
  }
  else {
    item = stack[top];
    top--;
    return item;
  }
}
