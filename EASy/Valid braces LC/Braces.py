def braces(p):        
    op = ["(", '{', '[']
    cl = [')', '}', ']']
    stack = []
    for i in p:
        if i in op:
            #print("Open", i)
            stack.append(i)
            #print('First Append', stack)
            if stack == []:
                #print("Open Close")
                #print(stack)
                return False
        elif i in cl:
            #print("Close", i)
            location = cl.index(i)
            if op[location] in stack:
                #print("OP", op[location])
                #print(stack)
                stack.pop()
            elif op[location] not in stack:
                return False
    #print(stack)
    if stack == []:
        return True
    else:
        #print('FAse')
        return False

print("'()'=>", braces('()'))
print("'(('=> ", braces('(('))
print("'}{'=> ", braces("}{"))
print("''=> ", braces(""))
print("'({)}'=> ", braces("({)}"))





# 2 NOT BY MEEEEEEEEEE  BUT THE BEST IF FOUND
#class Solution(object):
#    def isValid(self, s):
#        while "()" in s or "{}" in s or '[]' in s:
#            s = s.replace("()", "").replace('{}', "").replace('[]', "")
#        return s == ''