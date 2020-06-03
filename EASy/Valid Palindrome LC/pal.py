def pal(s):
    alp = "0123456789abcdefghijklmnopqrstuvwxyz" 
    s = s.lower()
    strs = [a for a in s if a in alp]
    for i in range(len(strs)):
        if strs[i] != strs[len(strs)-i-1]:
            return False
    return True

print(pal(("A man, a plan, a canal: Panama")))
print(pal('adfsdff'))