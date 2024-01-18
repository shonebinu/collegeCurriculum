#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>

#define MAX 5

using namespace std;

class PostFixEvaluator {
  public: 
  char postFix[20];
  int top, operandStack[MAX];

  PostFixEvaluator() {
    top = -1;
  }
  void push(int);
  int pop();
  void evaluate();
};

void PostFixEvaluator::push(int value) {
  if (top == MAX-1) {
    cout << "Stack Overflow";
    return;
  }
  top++;
  operandStack[top] = value;
}

int PostFixEvaluator::pop() {
  int value;
  if (top == -1) {
    cout << "Stack Underflow";
    return 0;
  }
  value = operandStack[top];
  top--;
  return value;
}

void PostFixEvaluator::evaluate() {
  int op1, op2, result, length, value;
  cout << "Enter the postfix expression: ";
  cin >> postFix;
  length = strlen(postFix);
  for (int i = 0; i < length; i++) {
    if (isalpha(postFix[i])) {
      cout << "Enter the value of " << postFix[i] << " : ";
      cin >> value;
      push(value);
    } else {
      op1 = pop();
      op2 = pop();
      switch(postFix[i]) {
        case '+':
          result = op2 + op1; break;
        case '-':
          result = op2 - op1; break;
        case '*':
          result = op2 * op1; break;
        case '/':
          result = op2 / op1; break;
        case '^':
          result = pow(op2, op1); break;
      }
      push(result);
    }
  }
  int finalResult = pop();
  cout << "The result is: " << finalResult;
}

int main() {
  PostFixEvaluator obj;
  obj.evaluate();
  return 0;
}
