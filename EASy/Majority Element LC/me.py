def maj(a):
    done = []
    os = list(set(a))
    print(os)
    for i in os:
        if a.count(i) >= len(a)/2:
            print(i)


maj([1,2,3,2,1,2,2])
            
