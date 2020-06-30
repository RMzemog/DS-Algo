#simple Stack

class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)
    
    def pop(self):
        self.items.pop()

    def is_empty(self):
        return self.items == []

    def peek(self):
        return self.items[-1]
    
    def print_stack(self):
        print(self.items)
    
# s = Stack()
# s.push(1)
# s.push(2)
# s.pop()
# s.is_empty()
# s.print_stack()



# valid parenthesis
# def val(s):
#     s1 = ['[' ,'{', '(']
#     s2 = [']', '}', ')']
#     d = []
#     for i in s:
#         if i in s1:
#             d.append(i)
#             if d == []:
#                 return False
#         elif i in s2:
#             loc = s2.index(i)
#             if s1[loc] in d:
#                 d.pop()
#             elif s1[loc] not in d:
#                 return False
#     if d == []:
#         return True
#     else:
#         return False

# print(val("({)"))