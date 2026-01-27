#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main() {
    int binaryNumber, decimal = 0, i = 0;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;
    
    stack<int> binaryStack;

    while (binaryNumber > 0) {
        int remainder = (pow(2, i)) * (binaryNumber % 10);
        binaryStack.push(remainder);
        binaryNumber /= 10;
        i++;
    }

    while (!(binaryStack.empty())) {
        decimal += binaryStack.top();
        binaryStack.pop();
    }

    cout << "Converted to decimal: " << decimal << endl;
    return 0;
}