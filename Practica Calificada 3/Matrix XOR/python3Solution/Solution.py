n = int(input())
ans = 0
v = [int(x) for x in input().split()]
for x in v:
    ans ^= x<<1
print(ans)
