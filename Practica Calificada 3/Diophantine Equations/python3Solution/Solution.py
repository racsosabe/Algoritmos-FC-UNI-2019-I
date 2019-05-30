def gcd(a, b):
    if b == 0: return a
    return gcd(b, a % b)

def gcdExtended(a, b):
    if b == 0:
        return 1,0
    x1, y1 = gcdExtended(b, a % b)
    x = y1
    y = x1 - (a // b) * y1
    return x,y

a,b,c = [int(x) for x in input().split()]
mcd = gcd(a,b)
if c % mcd != 0:
    print("-1")
else:
    x, y = gcdExtended(a,b)
    x *= c // mcd
    y *= c // mcd
    print(x,y)
