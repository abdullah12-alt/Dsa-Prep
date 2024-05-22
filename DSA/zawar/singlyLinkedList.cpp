#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Node contains two elements:
// Data
// address of next node

class Node{
	public:
	int data;
	Node* next;
	
	Node(int val){
		data = val;
		next = NULL;
	}	
};

/* Insertion: 
1. Insert at the start of the list
2. Insert at the End of the list
3. Insert at the given index of the list
*/

//Insertion at the start (O(1))
void insertAtHead(Node* &head, int data){
	Node* newNode = new Node(data);
	newNode -> next = head;
	head = newNode;
}

//Insertion at the End (O(n))
void insertATTail(Node* &head, int data){
	Node* newNode = new Node(data);
	Node* temp = head;
	while(temp -> next != NULL){
		temp = temp->next;
	}
	temp -> next = newNode;
}

//Insert at the index (O(n))
void insertAtIndex(Node* &head, int data, int place){
	Node* newNode = new Node(data);
	Node* prevNode = head;
	int i = 0;
	while(i != place-1){
		prevNode = prevNode -> next;
		i++;
	}
	newNode -> next = prevNode -> next -> next;
	prevNode -> next = newNode;
}

//Insert at the value (O(n))
void insertAtValue(Node* &head, int data_new_node, int val){
	Node* newNode = new Node(data_new_node);
	Node* temp = head;
	while(temp -> data != val){
		temp = temp -> next;	
		if(temp == NULL){
			cout << "Not found";
		}
	}
	newNode -> next = temp -> next;
	temp -> next = newNode;
}

// Delete at head
void delAtHead(Node* &head){
	Node* toDel = head;
	head = head -> next;
	delete(toDel);
}

// Delete at Tail
void delAtTail(Node* &head){
	Node* toDel = head;
	while(toDel -> next -> next != NULL){
		toDel = toDel -> next;
	}
	Node* temp = toDel -> next -> next;
	delete(temp);
	toDel->next = NULL;
}

// Displaying the List
void displayList(Node* &ptr){
	while(ptr != NULL){
		cout << ptr -> data << " -> ";
		ptr = ptr -> next;
	}
	cout << "NULL" << endl;
}


int main(int argc, char** argv) {
	
	Node* head = new Node (1);
	Node* second = new Node (3);
	Node* third =  new Node (5);
	Node* fourth = new Node (7);
	
	head -> next = second;
	second -> next = third;
	third -> next = fourth;
	
//	displayList(head);
	insertAtHead(head, 22);
	insertATTail(head, 44);
	insertAtIndex(head, 69, 3);
	insertAtValue(head, 50, 3);
	delAtHead(head);
	delAtTail(head);
	displayList(head);
	
	return 0;
}
