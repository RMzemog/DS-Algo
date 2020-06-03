#Remove all elements from a linked list of integers that have value val.

#Example:

#Input:  1->2->6->3->4->5->6, val = 6
#Output: 1->2->3->4->5

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
    
class LinkedList:
    def __init__(self):
        self.head = None
    def append(self, data):
        new_node = Node(data)
        if self.head == None:
            self.head = new_node
            return
        curr = self.head
        while curr.next:
            curr = curr.next
        last_node = curr
        last_node.next = new_node
    def print_list(self):
        while self.head:
            print(self.head.data)
            self.head = self.head.next
    def delete_duplicate(self, key):
        if self.head is None:
            return
        prev =self.head
        curr = self.head.next
        while curr:
            if curr.data == key:
                prev.next = curr.next
                curr = prev.next
            else:   
                prev = curr
                curr = curr.next
        if self.head.data == key:
            self.head = self.head.next     



llist = LinkedList()
llist.append(1)
llist.append(1)
llist.delete_duplicate(1)
llist.print_list()
        