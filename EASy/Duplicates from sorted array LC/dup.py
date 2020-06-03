def dupl(a):
    done = list(set(a))
    print(done)
    return len(done)

print(dupl([1,1,2]))