#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

bool isOperand(char c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int precedence(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    if (c == '^') return 3;
    return -1;
}

string InfixToPrefix(string infix, stack<char> s) {
    string prefix;
    // reverse the infix expression (need <algorithm> library)
    reverse(infix.begin(), infix.end());

    // reverse the parenthesis first
    for (int i = 0; i < infix.length(); i++) 
    {
        if (infix[i] == '(') 
        {
            infix[i] = ')';
        } 
        else if (infix[i] == ')') 
        {
            infix[i] = '(';
        }
    }

    for (int i = 0; i < infix.length(); i++) {
        if (isOperand(infix[i])) 
        {
            prefix += infix[i];
        } 
        else if (infix[i] == '(') 
        {
            s.push(infix[i]);
        // else if condition for ')'. Pop and print stack values til '(' is found && stack is not empty
        } 
        else if (infix[i] == ')') 
        {
            while ((!s.empty() && s.top() != '('))
                {
                    prefix += s.top();
                    s.pop();
                }
            if (!s.empty())
            {
                s.pop(); // Remove the '(' from the stack
            }
        }   
             
        // else if for operators
        else if (isOperator(infix[i])) 
        {
            if (s.empty()) 
            {
                s.push(infix[i]);
            } 
            else 
            {
                // check precedence and pop until stack is empty or higher precedence is found
                if (precedence(infix[i]) > precedence(s.top())) 
                {
                    s.push(infix[i]);
                } 
                // exponent operator is right associative
                else if (precedence(infix[i]) == precedence(s.top()) && infix[i] == '^') 
                {
                    s.push(infix[i]);
                } 
                else if (precedence(infix[i]) == precedence(s.top())) 
                {
                    s.push(infix[i]);
                } 
                else 
                {
                    while (!s.empty() && precedence(infix[i]) < precedence(s.top())) 
                    {
                        char temp = s.top();
                        prefix += temp;
                        s.pop();
                    }
                    s.push(infix[i]);
                }
            }
        }
    }

    while (!s.empty()) {
        prefix += s.top();
        s.pop();
    }
    
    reverse(prefix.begin(), prefix.end());

    return prefix;
}

int main() {
    string infix, prefix;
    cout << "Enter an infix expression: ";
    cin >> infix;
    stack<char> stack;
    cout << "Infix Expression: " << infix << endl;

    prefix = InfixToPrefix(infix, stack);

    cout << "Prefix Expression: " << prefix << endl;

    return 0;
}

// cleaner code
// #include <iostream>
// #include <stack>
// #include <algorithm>
// using namespace std;

// bool isOperator(char c) {
//     return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
// }

// bool isOperand(char c) {
//     return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
// }

// int precedence(char c) {
//     if (c == '+' || c == '-') return 1;
//     if (c == '*' || c == '/') return 2;
//     if (c == '^') return 3;
//     return -1;
// }

// string InfixToPrefix(string infix) {
//     stack<char> s;
//     string prefix;

//     // reverse infix
//     reverse(infix.begin(), infix.end());

//     // swap parentheses
//     for (char &c : infix) {
//         if (c == '(') c = ')';
//         else if (c == ')') c = '(';
//     }

//     for (char c : infix) {
//         if (isOperand(c)) {
//             prefix += c;
//         }
//         else if (c == '(') {
//             s.push(c);
//         }
//         else if (c == ')') {
//             while (!s.empty() && s.top() != '(') {
//                 prefix += s.top();
//                 s.pop();
//             }
//             if (!s.empty()) s.pop(); // pop '('
//         }
//         else if (isOperator(c)) {
//             while (!s.empty() &&
//                    (precedence(c) < precedence(s.top()) ||
//                    (precedence(c) == precedence(s.top()) && c != '^'))) {
//                 prefix += s.top();
//                 s.pop();
//             }
//             s.push(c);
//         }
//     }

//     while (!s.empty()) {
//         prefix += s.top();
//         s.pop();
//     }

//     reverse(prefix.begin(), prefix.end());
//     return prefix;
// }

// int main() {
//     string infix;
//     cout << "Enter an infix expression: ";
//     cin >> infix;

//     cout << "Prefix Expression: " << InfixToPrefix(infix) << endl;
//     return 0;
// }
