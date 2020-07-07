# Input : 153
# Output : Yes
# 153 is an Armstrong number.
# 1*1*1 + 5*5*5 + 3*3*3 = 153

# Input : 120
# Output : No
# 120 is not a Armstrong number.
# 1*1*1 + 2*2*2 + 0*0*0 = 9

# Input : 1253
# Output : No
# 1253 is not a Armstrong Number
# 1*1*1*1 + 2*2*2*2 + 5*5*5*5 + 3*3*3*3 = 723

# Input : 1634
# Output : Yes
# 1*1*1*1 + 6*6*6*6 + 3*3*3*3 + 4*4*4*4 = 1634



def arms(a):
    l = len(str(a))
    s = list(str(a))
    total = 0
    for i in s:
        total += int(i)**l
    if total == a:
        return True
    else:
        return False       
print(arms(1634))