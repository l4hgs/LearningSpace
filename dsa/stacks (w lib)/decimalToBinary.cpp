#include <iostream>
#include <stack>

using namespace std;

int main () {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;
    
    // initialize a stack store binary digits
    stack<int> binaryStack;

    while (number > 0) {
        int remainder = number % 2;
        binaryStack.push(remainder);
        number /= 2;
    }

    while (binaryStack.empty() == false) {
        cout << binaryStack.top();
        binaryStack.pop();
    }

    return 0;
}