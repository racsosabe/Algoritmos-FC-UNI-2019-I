n = int(input())
v = [int(x) for x in input().split()]
ans = 0
for x in v:
    ans |= x
print(ans)
