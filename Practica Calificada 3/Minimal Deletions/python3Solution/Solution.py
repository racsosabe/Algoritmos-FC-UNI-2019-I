def gcd(a,b):
    return a if b == 0 else gcd(b, a % b)

n = int(input())
v = [int(x) for x in input().split()]
mcd = 0
for x in v:
    mcd = gcd(mcd,x)
if mcd == 1:
    ans = 0
else:
    ans = -1
print(ans)
