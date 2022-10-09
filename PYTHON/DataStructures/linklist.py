'''
A simple CLI implementation of linkedlist
by Kshitij Verma

'''


class Node:
    def __init__(self,value = None):
        self.value = value
        self.next = None
    
class linklist:             # This is Circular linked list // change line 32 for singly linked list
    def __init__(self):
        self.head = None
        self.tail = None
    def __iter__(self):     # To Iterate in linked list using for loop
        node = self.head
        while node:
            yield node
            node = node.next
    def insert(self, value, location):
        newN = Node(value)
        if self.head == None:
            self.head = newN
            self.tail = newN
        else:
            if location == 0:
                newN.next = self.head  
                self.head = newN
            elif location == 1:
                newN.next = self.head   # Use newN.next = None for singly linked list
                self.tail.next = newN
                self.tail = newN
            else:
                temp = self.head
                index = 0
                while index < location -1:
                    temp = temp.next
                    index +=1
                newN.next = temp.next
                temp.next = newN
    def delete(self, location):
        if self.head == None:
            print("Empty List")
        elif location == 1 or location == 0:
            self.head = self.head.next
        else:
            temp = self.head
            index = 0
            while index <= location -2:
                temp1 = temp
                temp = temp.next
                index +=1
            temp1.next = temp.next

    def disp(self,a,b):
        temp = self.head
        for i in range(0,a):
            temp = temp.next
        for i in range(a,b+1):
            print(temp.value, end="\t")
            temp = temp.next

def delete_new(node,value):
    node = node.head
    while( node.value != value):
        node = node.next
    node = node.next.next

linkedlist = linklist()

 
print("Menu: \n")
print("1 .Insert\n")
print("2 .Remove\n")
print("3 .Display\n")
print("4 .Display between a,b\n")
print("5 .Show Menu\n")
i = 0
while i <=6:
    i = int(input("\nSelect an option: "))
    if i == 1:
        value = int(input("Data: "))
        loc = int(input("location: "))
        linkedlist.insert(value,loc)
    elif i == 2:
        loc = int(input("location: "))
        linkedlist.delete(loc)
    elif i == 3:
        print([i.value for i in linkedlist])
    elif i == 4:
        a = int(input("a : "))
        b = int(input("b : "))
        linkedlist.disp(a,b)
    elif i == 5:
        print("Menu: \n")
        print("1 .Insert\n")
        print("2 .Remove\n")
        print("3 .Display\n")
        print("4 .Display between a,b\n")
        print("5 .Show Menu\n")
    elif i==6:
        val = int(input())
        delete_new(linkedlist, val)
    
else:
    print("\tExited")
