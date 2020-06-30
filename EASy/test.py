# class Node:
#     def __init__(self, data):
#         self.data = data
#         self.next = None

# class LinkedList:
#     def __init__(self):
#         self.head = None

#     def print_list(self):
#         while self.head:
#             print(self.head.data)
#             self.head = self.head.next

#     def append(self, data):
#         new_node = Node(data)
#         if self.head is None:
#             self.head = new_node
#             return
#         last_node = self.head
#         while last_node.next :
#             last_node = last_node.next
#         last_node.next = new_node
    
#     def prepend(self,data):
#         new_node = Node(data)
#         new_node.next = self.head
#         self.head = new_node

#     def delete_first(self):
#         self.head = self.head.next
    
#     def delete_by_data(self, value):
#         if self.head.data == value:
#             self.head = self.head.next
#         curr = self.head
#         prev = None
#         while curr.next :
#             prev = curr
#             curr = curr.next
#             if curr.data == value:
#                 prev.next = curr.next
    
#     def delete_by_position(self, pos):
#         if pos == 1:
#             self.head = self.head.next
#         prev = None
#         curr = self.head
#         count = 1
#         while count < pos and curr.next:
#             prev = curr
#             curr = curr.next
#             count += 1
#         prev.next = curr.next
    
#     def list_length(self):
#         if self.head is None:
#             return 
#         count = 0
#         curr = self.head
#         while curr:
#             count += 1
#             curr = curr.next
#         print("Total Number of Nodes",count)
    
#     def remove_duplicates(self):
# the LIST should be sorted or this function will not work
#         if self.head is None:
#             return
#         curr = self.head.next
#         prev = self.head
#         while curr:
#             if prev.data == curr.data:
#                 prev.next = curr.next
#                 curr = prev.next
#             else:
#                 prev = curr
#                 curr = curr.next
    
#     def swap_list(self, v1, v2):
#         if v1 == v2:
#             return
#         prev1 = None
#         curr1 = self.head
#         while curr1 and curr1.data != v1:
#             prev1 = curr1
#             curr1 = curr1.next
        
#         prev2 = None
#         curr2 = self.head
#         while curr2 and curr2.data != v2:
#             prev2 = curr2
#             curr2 = curr2.next
        
#         if not curr1 or not curr2:
#             return

#         if prev1:
#             prev1.next = curr2
#         if prev2:
#             prev2.next = curr1
        
        
#         curr2.next, curr1.next = curr1.next, curr2.next
#     def reverse_list(self):
#         if self.head.next is None:
#             return self.head
#         prev = None
#         curr = self.head
#         while curr:
#             nxt = curr.next
#             curr.next = prev
#             prev = curr
#             curr = nxt
#         self.head = prev
                                                                                                                                                                                              
    
#llist = LinkedList()
#llist.append(1)
#llist.append(2)
#llist.append(3)
#llist.append(4)
#llist.append(5)
#llist.append(6)
#llist.reverse_list()
#llist.swap_list(2, 5)
#llist.remove_duplicates()
#llist.prepend(1)
#llist.list_length()
#llist.delete_by_position(3)
#llist.delete_first()
#llist.delete_by_data(4)
#llist.print_list()


### BUURE FORCE FOR LONGEST SUBSTRING WITHOUT REPEATING CHARACTER

# def br(s):
#     c = 0
#     for i in range(len(s)):
#         d = 0
#         for j in range(i):
#             print(s[j], s[i])
#             d += 1
#             if s[i] == s[j]:
#                 print(d, s[i], s[j])
#                 break
#         c = max(c, d)
#     return c

# print(br("pwwkew"))

# def t(s):
#     for i in range(s):
#         for j in range(i):
#             print(j, i)
# #t(10)

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

#     def merge_sorted_list(self, llist):
#         p = self.head
#         q = llist.head
#         s = None
#         if not p:
#             return q
#         if not q: 
#             return p
#         if p and q:
#             if p.data <= q.data:
#                 s = p
#                 p = p.next
#             else:
#                 s = q
#                 q = s.next
#         new_head = s
#         while p and q:
#             if p.data <= q.data:
#                 s.next = p
#                 s = p
#                 p = s.next
#             else:
#                 s.next = q
#                 s = q
#                 q = s.next
#         if not p:
#             s.next = q
#         if not q:
#             s.next = p
#         return new_head

    def palindrome(self):
        # curr = self.head
        # prev = None
        # pos = None
        # while curr:
        #     pos = curr.next
        #     curr.next = prev
        #     prev = curr
        #     curr = pos
        # self.head = prev
        s = []
        curr = self.head
        while curr:
            s.append(curr.data)
            curr = curr.next
        print(s)
        print(s[::-1])
        if s == s[::-1]:
            print("True")
        else:
            print("False")
##### wrong code it return string but we need linkelist as return type

    def middle(self):
        s =[]
        curr = self.head 
        while curr:
            s.append(curr.data)
            curr = curr.next
        print(s[len(s)//2])
llist1 = LinkedList()
# llist2 = LinkedList()
llist1.append(1)
llist1.append(2)
llist1.append(4)
llist1.middle()
# llist1.palindrome()
# llist1.print_list()


# llist2.append(2)
# llist2.append(3)
# llist2.append(4)
# llist2.append(6)
# llist2.append(8)

# llist1.merge_sorted_list(llist2)

# llist1.print_list()


# def iso(s1, s2):
#     d = {}
#     for i in range(len(s1)):
#         if s1[i] not in d:
#             d[s1[i]] = s2[i]
#         print(d[s1[i]])
#         if s1[i] in d and d[s1[i]] != s2[i]:
#             return False
#     return True
#     for key, value in d.items():
#         print(key, value)

# def test(s1, s2):
#     return iso(s1,s2) and iso(s2,s1)

# print(test('paper', 'title'))
# print(test('bar','foo'))
# #print(iso('egg', 'add'))
# print(test('ab', 'aa'))

def ugly(num):
    if num <= 1:
        return False
    while num > 1:
        print(num)
        if num % 2 == 0:
            num /= 2
        elif num % 3 == 0:
            num /= 3
        elif num % 5 == 0:
            num /= 5
        else:
            return False
    return True

# print(ugly(6))
# print(ugly(7))
# print(ugly(14))

def pattern_test(s1, s2):
    d = {}
    if len(s1) != len(s2):
        return False
    for i in range(len(s1)):
        if s1[i] not in d:
            d[s1[i]] = s2[i]
        if s1[i] in d and d[s1[i]] != s2[i]:
            return False
    return True
def pattern(s1, s2):
    return pattern_test(s2.split(" "), s1) and pattern_test(s1, s2.split(" "))

# print(pattern('abba', 'dog cat cat fish'))
# def trailing_zero(s):
#     count = 0
#     five = 5
#     while s//five > 0:
#         count += int(s/five)
#         five *= 5
#     print(five)
#     return count
# s = int(input("Enter the Number: "))
# print(trailing_zero(s))


def rev_vow(s):
    k = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', "U"]
    j = []
    for i in range(len(s)):
        if s[i] in k:
            j.append(s[i])
    j.reverse()
    print(j)
    c = 0
    s = list(s)
    for i in range(len(s)):
        if s[i] in k:
            s[i] = j[c]
            c += 1
    return "".join(s)
# print(rev_vow('hello'))
# print(rev_vow('leetcode'))




