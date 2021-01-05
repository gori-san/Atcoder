n = int(input())

x = []
y = []
for i in range(n):
    temp1, temp2 = map(int, input().split())
    x.append(temp1)
    y.append(temp2)

ans = 0
for i in range(n):
    for j in range(i+1, n):
        if (y[j]-y[i])/(x[j]-x[i]) >= -1 and (y[j]-y[i])/(x[j]-x[i]) <= 1:
            ans += 1

print(ans)
