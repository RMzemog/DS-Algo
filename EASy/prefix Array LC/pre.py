def prefix(a):
    minLen = len(a[0])
    for i in range(len(a)):
        minLen = min(minLen, len(a[i]))
    i = 0
    final = ""
    while i < minLen:
        done = a[0][i]
        for j in range(1, len(a)):
            if a[j][i] != done:
                return final
        final = final + done
        i += 1
    return final

print(prefix(["flower","flow","flight"])) 
print(prefix(["dog","racecar","car"]))  