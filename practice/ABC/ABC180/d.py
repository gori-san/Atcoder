x, y, a, b = map(int, input().split())
xp = 0
while x*a <= x+b and x * a < y:
    x = x * a
    xp += 1

xp += (y-1-x)//b
print(xp)
