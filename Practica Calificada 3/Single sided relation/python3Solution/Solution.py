n = int(input())
v = [int(x) for x in input().split()]
mayores = 0
for x in v:
    if x > 1: mayores += 1
print("Yes" if mayores <= 1 else "No")
