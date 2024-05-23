#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Node{
	public:
		int data;
		Node* prev;
		Node* next;
	Node(int val){
		data = val;
		prev = NULL;
		next = NULL;
	}
};

void insertAtStart(Node* &head, int val){
	Node* newNode = new Node(val);
	if(head == NULL){
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head;
	head = newNode;
}

void displayList(Node* head){
	Node* temp = head;
	cout << "NULL -> " ;
	while(temp!=NULL){
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout << "NULL" <<endl;
}

int main(int argc, char** argv) {
	Node* head = new Node(5);
	Node* second = new Node(6);
	Node* third = new Node(7);
	Node* fourth = new Node(8);
	
	head->next = second;
	
	second->next = third;
	second->prev = head;
	
	third->next = fourth;
	third->prev = second;
	
	fourth->prev = third;
	
	insertAtStart(head, 69);
	displayList(head);
	return 0;
}
