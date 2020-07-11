# Naive recursive function for gcd of 2 number 
def gcd(a, b):
    if a == 0:
        return b
    
    return gcd(a%b, a)

print(gcd(5, 10))
    


