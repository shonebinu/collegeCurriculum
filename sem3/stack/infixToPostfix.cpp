#include <iostream>
#include <cstring>

using namespace std;

#define MAX 10

class Stack {
  public:
  int top;
  char stack[MAX], postfix[10], infix[10];
  void get();
  void push(char);
  char pop();
  int prece(char);
  void inpos();

  Stack() {
    top = -1;
  }
};

void Stack::get() {
  cout << "Enter the infix expression: ";
  cin >> infix;
}

void Stack::push(char c) {
  if (top == MAX-1) {
    cout << "Stack Overflow";
    return;
  }
  top++;
  stack[top] = c;
}

char Stack::pop() {
  char c;
  if (top == -1) {
    cout << "Stack Underflow";
    return 0;
  }
  c = stack[top];
  top--;
  return c;
}

int Stack::prece(char c) {
  if (c == '^')
    return 3;
  else if (c == '/' || c == '*')
    return 2;
  else if (c == '+' || c == '-')
    return 1;
  else
    return 0;
}

void Stack::inpos() {
  int len, j = 0;
  char c;
  strcat(infix, ")");
  push('(');

  len = strlen(infix);

  for (int i = 0; i < len; i++) {
    switch(infix[i]) {
      case '(': push(infix[i]); break;
      case '^':
      case '/':
      case '*':
      case '+':
      case '-':
        while(prece(stack[top]) >= prece(infix[i])) {
          postfix[j] = pop();
          j++;
        }
        push(infix[i]);
        break;
      case ')':
        c = pop();
        while(c != '(') {
          postfix[j] = c;
          j++;
          c = pop();
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
  cout << postfix << endl;
}

int main() {
  Stack ob;
  ob.get();
  ob.inpos();
  return 0;
}
