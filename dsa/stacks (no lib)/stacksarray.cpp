#include <iostream>
using namespace std;

//definition of size
#define MAX_SIZE 5

//a stack uses a class
class Stack {
//private that's used in the class only
private:
	int data[MAX_SIZE];
	int top;

public:
	Stack() {
		top = -1;
	}

	void push(int element) {
		if (top == MAX_SIZE - 1) {
			cout << "Stack Overflow" << endl;
			return;
		}
		data[++top] = element;
	}

	int pop() {
		if (top == -1) {
			cout << "Stack Underflow" << endl;
			return -1; // Return a sentinel value indicating error
		}
		return data[top--];
	}

	int peek() {
		if (top == -1) {
			cout << "Stack is empty" << endl;
			return -1; // Return a sentinel value indicating error
		}
		return data[top];
	}
};

int main() {
	Stack stack;
	stack.push(18);
	stack.push(27);
	stack.push(36);
	stack.pop();
	cout << stack.peek();
	return 0;
}