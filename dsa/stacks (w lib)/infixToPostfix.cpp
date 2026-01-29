#include <iostream>
#include <stack>

using namespace std;

bool isOperand(char c) {
    return ((c >= 'A' && c <= 'Z') || ((c >= 'a' && c <= 'z')));
}

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int precedence(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    if (c == '^') return 3;
    return -1;
}

string infixToPostfix(string infix, stack<char> s) {
    string postfix;

    for (int i = 0; i < infix.length(); i++)
    {
        if (isOperand(infix[i]))
        {
            postfix += infix[i];
        }
        else if (infix[i] == '(')
        {
            s.push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                char temp = s.top();
                postfix += temp;
                s.pop();
            }
            if (!s.empty())
            {
                s.pop(); // Remove the '(' from the stack
            }
        }
        else if (isOperator(infix[i]))
        {
            if (s.empty())
            {
                s.push(infix[i]);
            }
            else
            {
                if (precedence(infix[i]) > precedence(s.top()))
                {
                    s.push(infix[i]);
                }
                else if (precedence(infix[i]) == precedence(s.top()) && infix[i] == '^')
                {
                    s.push(infix[i]);
                }
                else
                {
                    while (!s.empty() && precedence(infix[i]) <= precedence(s.top()))
                    {
                        char temp = s.top();
                        postfix += temp;
                        s.pop();
                    }
                    s.push(infix[i]);
                }
            }
        }
    }

    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main () {
    string infix, postfix;
    cout << "Enter an infix expression: ";
    cin >> infix;

    stack<char> stack;

    postfix = infixToPostfix(infix, stack);

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}