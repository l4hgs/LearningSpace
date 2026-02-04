#include <iostream>

using namespace std;

class Node {
    public:
        int key;
        int data;
        Node* next;

        // default constructor
        Node() {
            key = 0;
            data = 0;
            next = NULL;
        }

        // parameterized constructor
        Node(int k, int d) {
            key = k;
            data = d;
            next = NULL;
        }
};

class SinglyLinkedList {
    public:
        Node* head;

        // default constructor
        SinglyLinkedList() {
            head = NULL;
        }
        // parameterized constructor
        SinglyLinkedList(Node* n) {
            head = n;
        }

        // check if node exists using key value
        Node* nodeExists(int k) {
            Node* temp = NULL;
            Node* ptr = head;

            while (ptr != NULL) {
                if (ptr->key == k) {
                    temp = ptr;
                }
                ptr = ptr->next;
            }
            return temp;
        }
        // append a node to the list
        void appendNode(Node* n) {
            if (nodeExists(n->key) != NULL) {
                cout << "Node already exists with key value: " << n->key << ". Append another node with different key value." << endl;
            } else {
                if (head == NULL) {
                    head = n;
                    cout << "Node appended as head node." << endl;
                } else {
                    Node* ptr = head;
                    while (ptr->next != NULL) {
                        ptr = ptr->next;
                    }
                    ptr->next = n;
                    cout << "Node appended." << endl;
                }
            }
        }
        // prepend node - attach node at start
        void prependNode(Node* n) {
            if (nodeExists(n->key) != NULL) {
                cout << "Node already exists with key value: " << n->key << ". Prepend another node with different key value." << endl;
            } else {
                n->next = head;
                head = n;
                cout << "Node prepended." << endl;
            }
        }
        // insert node after a particular node in the list
        void insertNodeAfter(int k, Node* n) {
            Node* ptr = nodeExists(k);
            if (ptr == NULL) {
                cout << "No node exists with key value: " << k << endl;
            } else {
                if (nodeExists(n->key) != NULL) {
                    cout << "Node already exists with key value: " << n->key << ". Insert another node with different key value." << endl;
                } else {
                    n->next = ptr->next;
                    ptr->next = n;
                    cout << "Node inserted after key value: " << k << endl;
                }
            }

        
}

int main() {

}