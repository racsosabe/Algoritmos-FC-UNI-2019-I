def digitSum(x):
    if x < 10: return x
    return x % 10 + digitSum(x // 10)

def solve(S,n):
    Discriminante = S*S + 4*n
    r = int(Discriminante**0.5)
    if r * r == Discriminante:
        if r % 2 == S % 2:
            return (r - S) // 2
        else:
            return -1
    else:
        return -1

n = int(input())
ans = -1
for S in range(1,163):
    x = solve(S,n)
    if x > 0 and digitSum(x) == S:
        if ans == -1: ans = x
        else: ans = min(ans,x)
print(ans)
