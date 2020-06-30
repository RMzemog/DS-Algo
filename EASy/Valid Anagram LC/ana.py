# Given two strings s and t , write a function to determine if t is an anagram of s.

# Example 1:

# Input: s = "anagram", t = "nagaram"
# Output: true
# Example 2:

# Input: s = "rat", t = "car"
# Output: false
# Note:
# You may assume the string contains only lowercase alphabets.


def anag(s1, s2):
    if len(s1) != len(s2):
        return False
    s1 = list(s1)
    s2 =  list(s2)
    s1.sort()
    s2.sort()
    print(s1)
    print(s2)
    for i in range(len(s1)):
        if s1[i] != s2[i]:
            return False
    return True

print(anag('rat', 'car'))