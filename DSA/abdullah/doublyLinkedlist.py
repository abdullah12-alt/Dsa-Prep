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
    def insertAttail(self,data):
        newNode=Node(data)
        ptr=self.head
        while(ptr.next):       
            ptr=ptr.next
        newNode.next=ptr.next
        ptr.next=newNode
    def insertAtmiddle(self,data):
        newNode=Node(data)
        slow_ptr = self.head
        fast_ptr = self.head
        if self.head is not None:
            while(fast_ptr is not None and fast_ptr.next is not None):
                fast_ptr = fast_ptr.next.next
                slow_ptr = slow_ptr.next
        newNode.next = slow_ptr.next
        newNode.prev = slow_ptr
        slow_ptr.next = newNode
        if newNode.next is not None:
           newNode.next.prev = newNode
   
          
        
        
   
    
    
li=DL(1)
li.insertAtbegin(8)
li.insertAtbegin(88)
li.insertAtbegin(55)

li.insertAtbegin(10)
li.insertAtbegin(11)
li.insertAttail(99)
li.insertAtmiddle(66)
li.displayList()
    
        
        
        
    