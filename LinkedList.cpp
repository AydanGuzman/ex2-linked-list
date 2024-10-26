#include <iostream>
#include "Node.cpp"

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    // Function to insert a node at the beginning of the linked list
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;

    }

    // Function to insert a node at the end of the linked list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
   
        Node* current = head;
        while (current->next) current = current->next;
        current->next = new Node(value);
       
    }

    // Function to insert a node at a specific position in the linked list
    void insertAtPosition(int value, int position) {
        
        Node* current = head;
        for (int i = 0; current && i < position - 1; ++i) {
            current = current->next;
        }

        if (current) {
            Node* newNode = new Node(value);
            newNode->next = current->next;
            current->next = newNode;
        }
        
        

      
    }

    // Function to print the linked list
    void printList() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};
