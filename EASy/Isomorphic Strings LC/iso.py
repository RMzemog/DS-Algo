def iso(s, t):
    d = {}
    for i in range(len(s)):
        if s[i] not in d:
            d[s[i]] = t[i]
        if s[i] in d:
            if d[s[i]] != t[i]:
                return False
    return True

def call(s, t):
    return iso(s, t) and iso(t, s)


print(call('egg', 'add'))
print(call('foo', 'bar'))
print(call('paper', 'title'))