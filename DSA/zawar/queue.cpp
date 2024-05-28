#include <iostream>
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

class Queue{
    Node* front;
    Node* rear;

    public:
    Queue(){
        front = NULL;
        rear = NULL;
    }

    bool isEmpty(){
        return front == NULL;
    }

    void enqueue(int val){
        Node* newNode = new Node(val);
        if(isEmpty()){
            front = rear = newNode;
            return;
        }
        else{
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue(){
        if(isEmpty()){
            cout << "Queue is empty" <<endl;
            return;
        }
        else{
            Node* toDel = front;
            front = front->next;
            int data_delted = toDel->data;
            delete(toDel);
            cout << data_delted << " was deleted."<<endl;
        }
    }

    void peek(){
        if(isEmpty()){
            cout << "Queue is empty" <<endl;
            return;
        }
        cout << front->data <<endl;
    }

    void display(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = front;
        while(temp != NULL){
            cout << temp->data << " | ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    Queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.enqueue(40);
    qu.display();
    qu.peek();
    qu.dequeue();
    return 0;
}
