#include <iostream>
using namespace std;

//can use class or struct
class Node {
public:
	int data;
	Node* next;

    //node constructor
	Node(int value) {
		data = value;
		next = nullptr;
	}
};

//a stack uses a class
class Stack {
private:
	Node* top;

public:
	Stack() {
		top = nullptr;
	}

	void push(int element) {
		Node* newNode = new Node(element);
		newNode->next = top;
		top = newNode;
	}

	int pop() {
		if (top == nullptr) {
			cout << "Stack Underflow" << endl;
			return -1; // Return a sentinel value indicating error
		}
		Node* temp = top;
		int data = temp->data;
		top = temp->next;
		delete temp;
		return data;
	}

	int peek() {
		if (top == nullptr) {
			cout << "Stack is empty" << endl;
			return -1; // Return a sentinel value indicating error
		}
		return top->data;
	}
};

int main() {
	Stack stack;

	stack.push(1);
	stack.push(2);
	stack.push(3);

	cout << "Peek: " << stack.peek() << endl;
	cout << "Pop: " << stack.pop() << endl;
	cout << "Peek: " << stack.peek() << endl;

	return 0;
}