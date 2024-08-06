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
    public:
    Node* head;
    Node* tail;
    
    List(){
        head = NULL;
        tail = NULL;
    }

// Push front in the linked list....
    void push_Front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else{
            newNode->next = head;
            head = newNode;
        }
    }

    // Print the linked list

    void printList(){
        Node* temp = head;
        while(temp != NULL){
            cout<< temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
    
};

int main(){
    List sky;
    sky.push_Front(4);
    sky.push_Front(3);
    sky.push_Front(2);
    sky.push_Front(1);

    sky.printList();


}