#include<iostream>
using namespace std;

class Node{
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

    void insertAtFront(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else{
            newNode->next = head;
            head = newNode;
        }
    }

    void insertAtEnd(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void insertAtMid(int val, int pos){
        Node *newNode = new Node(val);

        Node* temp = head;
        for(int i = 0; i < pos-1; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }


    void display(){
        Node* temp = head;
        while(temp!= NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    List sky;
    sky.insertAtFront(2);
    sky.insertAtFront(1);
    sky.insertAtEnd(3);
    sky.insertAtEnd(4);
    sky.insertAtMid(5, 4);
    sky.display();
}


