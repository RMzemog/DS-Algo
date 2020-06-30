# Given a singly linked list, determine if it is a palindrome.

# Example 1:

# Input: 1->2
# Output: false
# Example 2:

# Input: 1->2->2->1
# Output: true
# Follow up:
# Could you do it in O(n) time and O(1) space?

class Node:
    def __init__(self,data):
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
        last = self.head
        while last.next:
            last = last.next
        last.next = new_node

    def print_list(self):
        curr = self.head
        while curr:
            print(curr.data)
            curr = curr.next   

    def is_palindrome(self):
        lst = []
        curr = self.head
        while curr:
            lst.append(curr.data)
            curr = curr.next
        if lst == lst[::-1]:
            print("True")
        else:
            print('False')     

llist = LinkedList()
llist.append(1)
llist.append(2)
llist.append(2)
llist.append(1)
llist.print_list()
llist.is_palindrome()