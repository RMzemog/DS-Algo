# Given a pattern and a string str, find if str follows the same pattern.

# Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in str.

# Example 1:

# Input: pattern = "abba", str = "dog cat cat dog"
# Output: true
# Example 2:

# Input:pattern = "abba", str = "dog cat cat fish"
# Output: false
# Example 3:

# Input: pattern = "aaaa", str = "dog cat cat dog"
# Output: false
# Example 4:

# Input: pattern = "abba", str = "dog dog dog dog"
# Output: false
# Notes:
# You may assume pattern contains only lowercase letters, and str contains lowercase letters that may be separated by a single space.


def pattern_test(s1, s2):
    d = {}
    if len(s1) != len(s2):
        return False
    for i in range(len(s1)):
        if s1[i] not in d:
            d[s1[i]] = s2[i]
        if s1[i] in d and d[s1[i]] != s2[i]:
            return False
    return True
def pattern(s1, s2):
    return pattern_test(s2.split(" "), s1) and pattern_test(s1, s2.split(" "))

print(pattern('abba', 'dog cat cat fish'))