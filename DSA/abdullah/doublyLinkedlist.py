class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
        self.prev=None
        

class DL:
    def __init__(self,data):
        self.head=Node(data)
    
    def displayList(self):
        ptr=self.head
        while(ptr is not None):
            print(ptr.data ,end="->")
            ptr=ptr.next
        print("Null")
        
    def insertAtbegin(self,data):
        newNode=Node(data)
        newNode.next=self.head
        self.head.prev=newNode
        self.head=newNode
   
    
    
li=DL(1)
li.insertAtbegin(8)
li.insertAtbegin(10)
li.insertAtbegin(11)
li.displayList()
    
        
        
        
    