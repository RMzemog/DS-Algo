def sr(haystack, needle):
    if needle == '':
        return 0
    elif needle in haystack:
        print(haystack.split(needle))
        return len(haystack.split(needle)[0])
    return -1

print(sr('hgss', 'ss'))
print(sr('hsshsshsshss', 'ss'))