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
        last_node = self.head
        while last_node.next:
            last_node = last_node.next
        last_node.next = new_node

    def print_list(self):
        curr = self.head
        while curr:
            print(curr.data)
            curr = curr.next

    def merging_list(self, llist):
        p = self.head
        q = llist.head
        s = None
        if not p:
            return q
        if not q:
            return p
        
        if p and q:
            if p.data <= q.data:
                s = p
                p = s.next
            else:
                s = q
                q = s.next
        new_head = s
        while p and q:
            if p.data <= q.data:
                s.next = p
                s = p
                p = s.next
            else:
                s.next = q
                s = q
                q = s.next

        if not q:
            s.next = p
        if not p:
            s.next = q
        
        return new_head

            

        

llist1 = LinkedList()
llist2 = LinkedList()

llist1.append(1)
llist1.append(5)
llist1.append(7)
llist1.append(9)
llist1.append(10)


llist2.append(2)
llist2.append(3)
llist2.append(4)
llist2.append(6)
llist2.append(8)

llist1.merging_list(llist2)
llist1.print_list()