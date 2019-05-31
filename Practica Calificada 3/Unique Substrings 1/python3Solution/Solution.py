def unique(s):
    mask = 0
    for i in range(len(s)):
        if mask & (1<<(ord(s[i])-ord('a'))) != 0: return False
        mask ^= 1 << (ord(s[i]) - ord('a'))
    return True

s = input()
ans = 0
for i in range(len(s)):
    for j in range(1,27):
        if i + j - 1 >= len(s): break
        if not unique(s[i:i+j]): break
        ans += 1
print(ans)
