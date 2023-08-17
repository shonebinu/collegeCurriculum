#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
// Change the header's according to the compiler

#define MAX 5

using namespace std;

class Stack {
  public:
    char p[20];
    int top, s[MAX];
    Stack() { top = -1; }
    void push(int);
    int pop();
    void eval();
};


void Stack::push(int item) {
  if (top == MAX - 1)
    cout << "Overflow";
  else {
    top++;
    s[top] = item;
  }
}

int Stack::pop() {
  int item;
  if (top == -1) {
    cout << "Underflow";
    return 0;
  }
  else {
    item = s[top];
    top--;
    return item;
  }
}

void Stack::eval() {
  int p1, p2, result, len, t, val;
  cout << "Enter the postfix expression: ";
  cin >> p;
  len = strlen(p);
  for (int i = 0; i < len; i++) {
    if (isalpha(p[i])) {
      cout << "Enter the value of " << p[i] << " : ";
      cin >> val;
      push(val);
    }
    else {
      p1 = pop();
      p2 = pop();
      switch (p[i]) {
        case '+':
          t = p2 + p1;
          break;
        case '-': 
          t = p2 - p1;
          break;
        case '*':
          t = p2 * p1;
          break;
        case '/':
          t = p2 / p1;
          break;
        case '^': 
          t = pow(p2, p1);
          break;
      }
      push(t);
    }
  }

  result = pop();
  cout << "The result is : "<<result;
}

int main() {
  Stack ob;
  cout << "\tEVALUATION OF POSTFIX\n";
  cout << "\t_____________________\n";
  ob.eval();
  return 0;
}
