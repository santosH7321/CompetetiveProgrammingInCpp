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

    void push_middle(int val, int pos){
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
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    List sky;
    sky.push_Front(5);
    sky.push_Front(3);
    sky.push_Front(2);
    sky.push_Front(1);
    sky.push_back(6);
    sky.push_middle(4, 3);
    sky.display(); // 1->2->3->4->5->6->NULL
}