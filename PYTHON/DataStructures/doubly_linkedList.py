class Node:
  def __init__(self, val, next = None, prev = None):
      self.val = val
      self.next = next
      self.prev = prev

class DoublyLinkedList:
  def __init__(self):
      self.head = None
      self.tail = None

  def add_at_begining(self, val):
    new_node = Node(val)
    if self.head is None:
      self.head = new_node
      self.tail = new_node
      return
    old_head = self.head
    self.head = new_node
    self.head.next = old_head
    old_head.prev = self.head

  def add_at_end(self, val):
    new_node = Node(val)
    if self.tail is None:
      self.head = new_node
      self.tail = new_node
      return
    old_tail = self.tail
    self.tail = new_node
    self.tail.prev = old_tail
    old_tail.next = self.tail


  def print_list(self):
    print()
    print('***Doubly Linked List in Forward Order***')
    print()
    current = self.head
    while current != None:
      if current.next != None:
        print(current.val, end = ' <-> ')
      else:
        print(current.val)
      current = current.next
    print()
    

  def print_list_reverse(self):
    print()
    print('***Doubly Linked List in Reverse Order***')
    print()
    current = self.tail
    while current != None:
      if current.prev != None:
        print(current.val, end = ' <-> ')
      else:
        print(current.val)
      current = current.prev
    print()




# testing

# dll = DoublyLinkedList()
# # [1, 2, 3, 4, 5, 6, 7]
# for num in [1, 2, 3, 4, 5, 6, 7]:
#   dll.add_at_end(num)

# dll.print_list()
# dll.print_list_reverse()
