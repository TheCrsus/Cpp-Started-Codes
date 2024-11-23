#include <iostream>
using namespace std;

// Define a Node structure
struct Node {
    int data;
    Node* next;

    // Constructor to initialize a new node
    Node(int value) : data(value), next(nullptr) {}
};

// Define a LinkedList class
class LinkedList {
private:
    Node* head;

public:
    // Constructor to initialize an empty list
    LinkedList() : head(nullptr) {}

    // Method to add a new node at the end of the list
    void append(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Method to display all nodes in the list
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "end" << endl;
    }

    // Method to delete a node with a specific value
    void deleteValue(int value) {
        if (!head) return;

        // If the head node is the one to delete
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        // Find the node before the one to delete
        Node* temp = head;
        while (temp->next && temp->next->data != value) {
            temp = temp->next;
        }
        if (temp->next) {
            Node* nodeToDelete = temp->next;
            temp->next = temp->next->next;
            delete nodeToDelete;
        }
    }

    // Destructor to clean up all nodes
    ~LinkedList() {
        Node* temp;
        while (head) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// Main function to test the linked list
int main() {
    LinkedList list;

    // Append elements to the linked list
    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);

    // Display the linked list
    cout << "Linked List: ";
    list.display();

    // Delete a value from the list
    list.deleteValue(30);
    cout << "After deleting 30: ";
    list.display();

    return 0;
}

