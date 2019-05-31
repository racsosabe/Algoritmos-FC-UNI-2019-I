def solve(atacante, defensor):
    if defensor == 0: return atacante + defensor
    if atacante % defensor == 0: return 2*defensor
    return solve(defensor,atacante % defensor)

x, y = [int(x) for x in input().split()]
print(solve(max(x,y),min(x,y)))
