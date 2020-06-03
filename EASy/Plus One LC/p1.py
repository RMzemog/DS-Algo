def p1(nu):
    nu = [str(i) for i in nu]
    done =int("".join(nu))
    done += 1
    final = [int(i) for i in str(done)]
    return final

print(p1([4,3,2,1]))