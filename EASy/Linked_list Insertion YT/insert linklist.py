class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
    
class LinkedList:
    def __init__(self):
        self.head = None
    def print_list(self):
        cur_node = self.head
        while cur_node:
            print(cur_node.data)
            cur_node = cur_node.next
    def append(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return
        last_node = self.head
        while last_node.next:
            last_node = last_node.next
        last_node.next = new_node
# ######## FOR PREPEND ######### #
    def prepend(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node
# ######### Insertin after a specific node ######## #
    def insert_after_node(self, prev_node, data):
        if not prev_node:
            print('Previous node is not in the list')
            return
        new_node = Node(data)
        new_node.next = prev_node.next
        prev_node.next = new_node

# ###### DELETION of specific nodes with know data ####### #
    def delete_node(self, key):
        cur_node = self.head
        if cur_node and cur_node.data == key:
            self.head = cur_node.next 
            cur_node = None
        prev = None
        while cur_node and cur_node.data != key:
            prev = cur_node
            cur_node = cur_node.next
        if cur_node is None:
            return

        prev.next = cur_node.next
        cur_node = None 


    def delete_node_at_position(self, pos):
        cur_node = self.head
        if pos == 0:
            self.head = cur_node.next
            cut_node = None
            return
        prev = None
        count = 1
        while cur_node and count != pos:
            prev = cur_node
            cur_node = cur_node.next
            count +=1
        if cur_node is None:
            return 
        prev.next = cur_node.next
        cur_node = None
    def swap_nodes(self , key_1, key_2):
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

        curr_1.next , curr_2.next = curr_2.next, curr_1.next
            


llist = LinkedList()
llist.append('A')
llist.append('B')
llist.append('C')
llist.append("D")
llist.swap_nodes('A', 'D')
#llist.prepend('D')
#llist.insert_after_node(llist.head.next, "E")
#llist.delete_node('B')
llist.print_list()