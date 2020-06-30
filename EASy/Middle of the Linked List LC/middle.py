# Given a non-empty, singly linked list with head node head, return a middle node of linked list.

# If there are two middle nodes, return the second middle node.

 

# Example 1:

# Input: [1,2,3,4,5]
# Output: Node 3 from this list (Serialization: [3,4,5])
# The returned node has value 3.  (The judge's serialization of this node is [3,4,5]).
# Note that we returned a ListNode object ans, such that:
# ans.val = 3, ans.next.val = 4, ans.next.next.val = 5, and ans.next.next.next = NULL.
# Example 2:

# Input: [1,2,3,4,5,6]
# Output: Node 4 from this list (Serialization: [4,5,6])
# Since the list has two middle nodes with values 3 and 4, we return the second one.
 

# Note:

# The number of nodes in the given list will be between 1 and 100.



class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    def append(self,data):
        new_node = Node(data)
        if self.head == None:
            self.head = new_node
            return 
        curr = self.head
        while curr.next:
            curr = curr.next
        curr.next = new_node
    def print_list(self):
        curr = self.head
        while curr:
            print(curr.data)
            curr = curr.next
    def middle(self):
        s =[]
        curr = self.head
        curr2 = self.head 
        while curr:
            s.append(curr.data)
            curr = curr.next
        l = len(s)//2
        while curr2 and l > 0:
            curr2 = curr2.next
            l -= 1
        print(curr2.data)
llist1 = LinkedList()
# llist2 = LinkedList()
llist1.append(1)
llist1.append(7)
llist1.append(2)
llist1.append(7)
llist1.append(2)
llist1.append(8)
llist1.append(4)
llist1.middle()