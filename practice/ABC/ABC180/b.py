import math

N = int(input())
x = list(map(int, input().split()))

abs_sum = 0
for i in range(N):
    x[i] = abs(x[i])
    abs_sum += x[i]**2

print(sum(x))
print(math.sqrt(abs_sum))
print(max(x))
