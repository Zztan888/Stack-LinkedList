////////////////////// Test 2, 2023/2024 (Sem 1) //////////////////////
//// Name: 
//// Matrics No: 
//// Date/ Day: 22 JUNE 2024
//// Linked-list
///////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class Node {
    char ch;

public:
    Node* next;
    Node(char c) { ch = c; next = NULL; }
    char getChar() { return ch; }
};

class List {
    Node* head;

public:
    List() { head = NULL; }
    bool isEmpty() { return head == NULL; }

    void insertNode(Node*);
    void deleteNode();
    string findNode(char);
    void displayList();
};

// Question 1 - 2 a): Write your answer here
//-------------------------------------------
void List :: insertNode(Node*newNode ){
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head = newNode;
    }
}
// End of Question 1 - 2 a)


// Question 1 - 2 b): Write your answer here
//-------------------------------------------
void List::deleteNode(){
    //case 1
    if (isEmpty()){
        cout<<"No nodes to delete." <<endl;
        return;
    }

    // case3
    if (head->next == head) {
        delete head;
        head = NULL;
    } else {//case2 multiple nodes - delete the last node
        Node* temp = head;
        Node* prev = head;
        while (temp->next != head) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = head;
        delete temp;

    }
}


// End of Question 1 - 2 b)


// Question 1 - 2 c): Write your answer here
//-------------------------------------------

string List:: findNode(char c){
    if (isEmpty()) return "False";
    Node* current = head;
    do {
        if (current->getChar() == c) {
            return "True";
        }
        current = current->next;
    } while (current != head);
    return "False";
}

// End of Question 1 - 2 c)


// Question 1 - 2 d): Write your answer here
//-------------------------------------------
void List::displayList(){
    if (isEmpty()){
        cout<< "Nothing to display."<<endl;
        return;
    }

    Node*current =head;
    do{
        cout<<current->getChar();
        if (current->next!=head){
            cout<< " -> ";
        }
        current = current->next;
    }while (current!=head);

    cout<<endl;
}


// End of Question 1 - 2 d)

int main() {
    // Question 1 - 3 a): Write your answer here
    //-------------------------------------------
    List myList;


    // End of Question 1 - 3 a)


    // Question 1 - 3 b): Write your answer here
    //-------------------------------------------

    myList.deleteNode();

    myList.insertNode(new Node('A'));
    myList.displayList();

    myList.insertNode((new Node('Z')));
    myList.displayList();

    cout << "Z is found in the list? "<< myList.findNode('Z')<< endl;

    myList.deleteNode();
    myList.displayList();

    myList.deleteNode();
    myList.displayList();


    // End of Question 1 - 3 b)
    
    return 0;
}

