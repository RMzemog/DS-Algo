n = int(input())
s = str(input())
one = {}
two = {}
dona = sorted(list(set(list(s))))
# print(dona)
for i in dona:
    if (s.count(i) == 1):
        one[i] = s.count(i)
    else:
        two[i] = s.count(i)
print("ONE ", one)
9
print("TWO", two)
count = 0
for key,value in two.items():
    if value > 2:
        count+=1
        print(key*3)
    for key2,value2 in one.items():
        print(key+""+key2+""+key)
        count+=1