import itertools

n = int(input())
a = list(map(int, input().split()))
a.sort()
sum_a = sum(a)

ans = 0
for i in range(n):
    sum_a -= a[i]
    ans += sum_a - (n-i-1)*a[i]

print(ans)
