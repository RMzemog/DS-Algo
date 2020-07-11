# Given a string, find the first non-repeating character in it and return its index. If it doesn't exist, return -1.

# Examples:

# s = "leetcode"
# return 0.

# s = "loveleetcode"
# return 2.
 

# Note: You may assume the string contains only lowercase English letters.


#TIME LIMIT EXCEEDED FOR THIS CODE AND FOR TEST CASE
def uniq2(a):
    a = list(a)
    d = -1
    for i in a:
        d += 1
        if a.count(i) == 1:
            return d
    return -1

def uniq(a):
    d = {}
    for i in a:
        if i in d:
            d[i] += 1
        else:
            d[i] = 1
    for i in range(len(a)):
        if d[a[i]] == 1:
            return i
print(uniq('loveleetcode'))