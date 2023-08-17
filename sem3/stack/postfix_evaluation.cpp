#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>

#define MAX_STACK_SIZE 5

using namespace std;

class PostfixEvaluator {
public:
    char postfixExpression[20];
    int stackTop, operandStack[MAX_STACK_SIZE];

    PostfixEvaluator() {
        stackTop = -1;
    }

    void pushOperand(int);
    int popOperand();
    void evaluateExpression();
};

void PostfixEvaluator::pushOperand(int value) {
    if (stackTop == MAX_STACK_SIZE - 1) {
        cout << "Stack Overflow";
    } else {
        stackTop++;
        operandStack[stackTop] = value;
    }
}

int PostfixEvaluator::popOperand() {
    int value;
    if (stackTop == -1) {
        cout << "Stack Underflow";
        return 0;
    } else {
        value = operandStack[stackTop];
        stackTop--;
        return value;
    }
}

void PostfixEvaluator::evaluateExpression() {
    int operand1, operand2, result, expressionLength, tokenValue, tokenOperand;
    cout << "Enter the postfix expression: ";
    cin >> postfixExpression;
    expressionLength = strlen(postfixExpression);
    for (int i = 0; i < expressionLength; i++) {
        if (isalpha(postfixExpression[i])) {
            cout << "Enter the value of " << postfixExpression[i] << " : ";
            cin >> tokenValue;
            pushOperand(tokenValue);
        } else {
            operand1 = popOperand();
            operand2 = popOperand();
            switch (postfixExpression[i]) {
                case '+':
                    result = operand2 + operand1;
                    break;
                case '-':
                    result = operand2 - operand1;
                    break;
                case '*':
                    result = operand2 * operand1;
                    break;
                case '/':
                    result = operand2 / operand1;
                    break;
                case '^':
                    result = pow(operand2, operand1);
                    break;
            }
            pushOperand(result);
        }
    }

    int finalResult = popOperand();
    cout << "The result is : " << finalResult;
}

int main() {
    PostfixEvaluator evaluator;
    cout << "\tPOSTFIX EXPRESSION EVALUATION\n";
    cout << "\t______________________________\n";
    evaluator.evaluateExpression();
    return 0;
}

