#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

    public:
    List(){
        head = NULL;
        tail = NULL;
    }

    void push_Front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void printList(){
        Node* temp = head;
        while(temp!= NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout <<"NULL"<< endl;
    }
};

int main(){
    List sky;
    sky.push_Front(3);
    sky.push_Front(2);
    sky.push_Front(1);
    sky.push_back(4);
    sky.push_back(5);

    sky.printList();
}