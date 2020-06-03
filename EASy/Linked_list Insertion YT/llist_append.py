class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
    
class LinkedList:
    def __init__(self):
        self.head = None
    def append(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return
        last_node = self.head
        while last_node.next:
            last_node = last_node.next
        last_node.next = new_node
    def print_list(self):
        cur_node = self.head
        while cur_node:
            print(cur_node.data)
            cur_node = cur_node.next
    def prepend(self,data):
         new_node = Node(data)
         new_node.next = self.head
         self.head = new_node
    def deletefirst(self):
        cur_node = self.head
        self.head = cur_node.next
    def delete_node(self, key):
        cur_node = self.head
        if cur_node and cur_node.data == key:
            self.head = cur_node.next
        prev = None
        while cur_node and cur_node.data != key:
            prev = cur_node
            cur_node = cur_node.next
        if cur_node is None:
            return
        prev.next = cur_node.next 
    def delete_node_postition(self, pos):
        cur_node = self.head
        if pos == 0:
            self.head = cur_node.next
            return
        prev = None
        count = 1
        while pos != count and cur_node:
            prev = cur_node
            cur_node = cur_node.next
            count += 1
        if cur_node == None:
            return
        prev.next = cur_node.next
    def length_node(self):
        cur_node = self.head
        count = 0
        while cur_node:
            cur_node = cur_node.next
            count += 1
        print(count)
    def removing_duplicates(self):
        cur_node = self.head
         
    def swap_nodes(self,key_1, key_2):
        if key_1 == key_2:
            return
        prev_1 = None
        curr_1 = self.head
        while curr_1 and curr_1.data != key_1:
            prev_1 = curr_1
            curr_1 = curr_1.next

        prev_2 = None
        curr_2 = self.head    
        while curr_2 and curr_2.data != key_2:
            prev_2 = curr_2
            curr_2 = curr_2.next

        if not curr_1 or not curr_2:
            return
        
        if prev_1:
            prev_1.next = curr_2
        else:
            self.head = curr_2
        
        if prev_2:
            prev_2.next = curr_1
        else:
            self.head = curr_1

        curr_1.next, curr_2.next = curr_2.next, curr_1.next



llist = LinkedList()
llist.append(1)
llist.append(1)
llist.append(1)
llist.append(2)
llist.append(3)
llist.append(4)
#llist.removing_duplicates()
#llist.swap_nodes(1,4)
#llist.delete_node_postition(2)
#llist.length_node()
llist.print_list()
