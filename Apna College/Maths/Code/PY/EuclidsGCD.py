def gcd(a, b):
    while(b != 0):
        rem = a % b
        a = b
        b = rem
    return a


a = int(input())
b = int(input())

print(gcd(a, b))
