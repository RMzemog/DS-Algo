s = str(input())
d = ''
def ispalindrome(ss):
    # print(ss == ss[::-1])
    return ss == ss[::-1]


for i in range(0, len(s)):
    # print("sd = ", s[0:i] + s[i+1:])
    d = s[0:i] + s[i+1:]
    if ispalindrome(d) == True:
        print("true")
        break
else:
    print("false")
