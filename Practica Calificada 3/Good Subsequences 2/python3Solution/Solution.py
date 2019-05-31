MOD = 1000000000+7
n, m = [int(x) for x in input().split()]
v = [int(x) for x in input().split()]
C = sum([1 if x % m == 0 else 0 for x in v])
ans = pow(2,C,MOD)
ans -= 1
if ans < 0: ans += MOD
print(ans)
