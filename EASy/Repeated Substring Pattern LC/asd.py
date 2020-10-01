def repeatedSubstringPattern(s):
    length = len(s)
    temp = ""
    for i in range(length//2):
        temp += s[i]
        g = length// len(temp)
        if temp * g == s:
            return True
    return False
print(repeatedSubstringPattern("abababa"))