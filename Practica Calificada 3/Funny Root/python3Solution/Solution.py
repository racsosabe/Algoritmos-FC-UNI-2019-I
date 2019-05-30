def digitSum(x):
    if x < 10: return x
    return x % 10 + digitSum(x // 10)

def solve(n):
    if n < 10: return n
    return solve(digitSum(n))

s = input()
first_digit_sum = 0
for x in s:
    first_digit_sum += ord(x) - ord('0')
print(solve(first_digit_sum))
