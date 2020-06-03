def is_palindrome(n):
    b = abs(n)
    print(b)
    print(n)
    x, y = n, 0
    f = lambda: (y * 10) + x % 10
    while x > 0:
        x, y = x//10 , f()
    return y == n

print(is_palindrome(-123454321))
# True
print(is_palindrome(-121))
# False