# 3 1000
# 2 5 4
# 3 7 8 9 
# 5 5 7 8 9 10 
# Sample Output

# 206

from itertools import product 
x,y = input().split()
x = int(x)
y = int(y)
g = []
for i in range(x):
    a = list(map(int, input().split(" ")))
    a.pop(0)
    g.append(a)
d = list(product(*g))
e = list(map(lambda x : sum(i**2 for i in x)% y, d))
print(max(e))