def fizz(n):
    done = []
    for i in range(1,n+1):
        if i % 3 == 0 and i % 5 == 0:
            done.append("FizzBuzz")
        elif i % 3 == 0:
            done.append("Fizz")
        elif i % 5 == 0:
            done.append("Buzz")
        else:
            done.append(str(i))
    return done

print(fizz(1))