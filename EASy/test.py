class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def print_list(self):
        while self.head:
            print(self.head.data)
            self.head = self.head.next

    def append(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return
        last_node = self.head
        while last_node.next :
            last_node = last_node.next
        last_node.next = new_node
    
    def prepend(self,data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node

    def delete_first(self):
        self.head = self.head.next
    
    def delete_by_data(self, value):
        if self.head.data == value:
            self.head = self.head.next
        curr = self.head
        prev = None
        while curr.next :
            prev = curr
            curr = curr.next
            if curr.data == value:
                prev.next = curr.next
    
    def delete_by_position(self, pos):
        if pos == 1:
            self.head = self.head.next
        prev = None
        curr = self.head
        count = 1
        while count < pos and curr.next:
            prev = curr
            curr = curr.next
            count += 1
        prev.next = curr.next
    
    def list_length(self):
        if self.head is None:
            return 
        count = 0
        curr = self.head
        while curr:
            count += 1
            curr = curr.next
        print("Total Number of Nodes",count)
    
    def remove_duplicates(self):
# the LIST should be sorted or this function will not work
        if self.head is None:
            return
        curr = self.head.next
        prev = self.head
        while curr:
            if prev.data == curr.data:
                prev.next = curr.next
                curr = prev.next
            else:
                prev = curr
                curr = curr.next
    
    def swap_list(self, v1, v2):
        if v1 == v2:
            return
        prev1 = None
        curr1 = self.head
        while curr1 and curr1.data != v1:
            prev1 = curr1
            curr1 = curr1.next
        
        prev2 = None
        curr2 = self.head
        while curr2 and curr2.data != v2:
            prev2 = curr2
            curr2 = curr2.next
        
        if not curr1 or not curr2:
            return

        if prev1:
            prev1.next = curr2
        if prev2:
            prev2.next = curr1
        
        
        curr2.next, curr1.next = curr1.next, curr2.next
    def reverse_list(self):
        if self.head.next is None:
            return self.head
        prev = None
        curr = self.head
        while curr:
            nxt = curr.next
            curr.next = prev
            prev = curr
            curr = nxt
        self.head = prev
                                                                                                                                                                                              
    
llist = LinkedList()
llist.append(1)
llist.append(2)
llist.append(3)
llist.append(4)
llist.append(5)
llist.append(6)
llist.reverse_list()
#llist.swap_list(2, 5)
#llist.remove_duplicates()
#llist.prepend(1)
#llist.list_length()
#llist.delete_by_position(3)
#llist.delete_first()
#llist.delete_by_data(4)
llist.print_list()


