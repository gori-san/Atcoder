n = int(input())
a = list(map(int, input().split()))
ans = 0
for i in range(len(a)):
    ans += 1/a[i]

print(1/ans)
