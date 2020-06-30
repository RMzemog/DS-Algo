# Write a function that takes a string as input and reverse only the vowels of a string.

# Example 1:

# Input: "hello"
# Output: "holle"
# Example 2:

# Input: "leetcode"
# Output: "leotcede"
# Note:
# The vowels does not include the letter "y".



# Code works but it is KINDA SLOW so i will try to find a quicker Solution For this .....
def rev_vow(s):
    k = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', "U"]
    j = []
    for i in range(len(s)):
        if s[i] in k:
            j.append(s[i])
    j.reverse()
    print(j)
    c = 0
    s = list(s)
    for i in range(len(s)):
        if s[i] in k:
            s[i] = j[c]
            c += 1
    return "".join(s)
print(rev_vow('hello'))
print(rev_vow('leetcode'))