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

class Stack{
    Node* head;
    public:
    Stack(){
        head = NULL;
    }
    void isEmpty(){
        if(head == NULL){
            cout << "Stack is empty" << endl;
            return;
        }
    }
    void push(int d){
        Node* newNode = new Node(d);
        if(head == NULL){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void pop(){
        if(head == NULL){
            cout << "Stack is empty." << endl;
            return;
        }
        Node* toDel = head;
        head = head -> next;
        delete(toDel);
    }

    void peek(){
        if(head == NULL){
            cout << "Stack is empty" <<endl;
            return;
        }
        else{
            cout << head->data << endl;
        }
    }

    void display(){
        Node* temp = head;
        if(temp == NULL){
            cout << "Stack is empty" << endl;
            return;
        }
        while(temp != NULL){
            cout << temp->data << " | " ;
            temp = temp->next;
        }
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.pop();
    st.peek();
    st.isEmpty();
    st.display();

    return 0;
}
