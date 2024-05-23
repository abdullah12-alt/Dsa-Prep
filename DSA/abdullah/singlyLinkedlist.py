class Node:
    def __init__(self,data=None):
        self.data=data
        self.next=None

class SL:
    def __init__(self,data):
        self.head=Node(data)

    def displayList(self):
        ptr=self.head
        while(ptr is not None):
            print(ptr.data)
            ptr=ptr.next
        print("NUll")

    def insertAtbegin(self,data):
        newNode=Node(data)
        newNode.next=self.head
        self.head=newNode

    def insertAttail(self,data):
        newNode=Node(data)
        ptr=self.head
        while(ptr.next is not None):
            # print(ptr.data)
            ptr=ptr.next
        ptr.next=newNode
    def insertAtvalue(self,value,data):
        newNode=Node(data)
        ptr=self.head
        temp=self.head
        while(ptr.data!=value):
            ptr=ptr.next
            if ptr==None:
                print("Not Found")
                return 
        newNode.next=ptr.next
        ptr.next=newNode
        
    def deleleAthead(self):
        temp=self.head.next
        self.head=temp
        del(temp)
    def deleteAttail(self):
        ptr=self.head
        while(ptr.next.next):
            ptr=ptr.next
        
        del(ptr.next.next)
        ptr.next=None
        
    def updateAthead(self,data):
        self.head.data=data
    
    def updateAttail(self,data):
        ptr=self.head
        while(ptr.next):
            ptr=ptr.next
        ptr.data=data
        
        
        
            
        

    
        

li1=SL(1)
li1.insertAtbegin(2)
li1.insertAtbegin(3)
li1.insertAtbegin(4)
li1.insertAtbegin(5)
li1.insertAtbegin(7)
li1.insertAtbegin(9)
li1.insertAttail(10)

# li1.insertAtvalue(10,88)
li1.displayList()
li1.deleleAthead()
print("after")
li1.displayList()
li1.deleteAttail()
print("after")
li1.displayList()
print("after update at head")
li1.updateAthead(99)
li1.displayList()
print("after update at head")
li1.updateAttail(83)
li1.displayList()

# print("done")



