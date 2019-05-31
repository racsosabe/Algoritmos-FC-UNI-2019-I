from sys import stdout,stdin # For fast I/O

MAX = 1000000+5
pf = [i for i in range(MAX)]
for i in range(2,MAX):
    if i*i >= MAX: break
    if pf[i] == i:
        for j in range(i*i,MAX,i):
            pf[j] = i

q = int(input())
for case in range(q):
    x = int(stdin.readline()) # readline is faster than input()
    ans = 0
    while x != 1:
        f = pf[x]
        while x % f == 0:
            x //= f
        ans += 1
    stdout.write(str(ans) + '\n') # write is faster than print()
