class Node:
    def __init__(self,data=None):
        self.data=data
        self.next=None
        
        
class CL:
    def __init__(self):
        self.head=None
        self.tail=None
        
    def insertAthead(self,data):
        self.head=Node(data)
        self.head.next=self.tail