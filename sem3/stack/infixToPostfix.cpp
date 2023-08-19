#include <iostream>
#include <cstring>
#include <iterator>

using namespace std;

#define MAX 10

class Stack {
  public: 
    int top;
    char stack[MAX], postfix[10], infix[10];
    void push(char);
    void get();
    char pop();
    int prece(char);
    void inpos();

    Stack() { top = -1; }
};

int main() {
  cout << "\tINFIX TO POSTFIX\n";
  cout << "\t________________\n";

  cout << "Enter the infix expression: ";

  Stack stack;
  stack.get();
  stack.inpos();

  return 0;
}

void Stack::get() {
  cin >> infix;
}

void Stack::inpos() {
  int len, i, j = 0;
  char item;
  strcat(infix, ")");
  push('(');

  len = strlen(infix);

  for (i = 0; i < len; i++) {
    switch(infix[i]) {
      case '(': push(infix[i]);
                break;
      case '^': 
      case '/':
      case '*':
      case '+':
      case '-':      

        while (prece(stack[top]) >= prece(infix[i])) {
            item = pop();
            postfix[j] = item;
            j++;
          }

        push(infix[i]);
        break; 

      case ')': 
        item = pop();
        while(item != '(') {
            postfix[j] = item;
            j++;
            item = pop();
        }
        break;
      default: 
        postfix[j] = infix[i];
        j++;
        break;
    }
  }
  postfix[j] = '\0';
  cout << "Postfix expression is: ";
  cout << postfix;
}


void Stack::push(char x) {
  if (top == MAX - 1) cout << "Overflow";
  else {
    top++;
    stack[top] = x;
  }
}

char Stack::pop() {
  char item;
  if (top == -1) {
    cout << "Underflow";
    return 0;
  }
  else {
    item = stack[top];
    top--;
    return item;
  }
}

int Stack::prece(char x) {
  int p;
  if (x == '^')
    p = 3;
  else if (x == '/' || x == '*')
    p = 2;
  else if (x == '+' || x == '-')
    p = 1;
  else 
    p = 0;
  return p;
}
