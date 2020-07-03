n, m = map(int, input().split())
a = list(map(int, input().split()))
bc = [0] * m
ans = []
a.sort()
for i in range(m):
    bc[i] = list(map(int, input().split()))
bc.sort(key=lambda x: x[1], reverse=True)


j = 0
for i in range(n):
    if j < m:
        if bc[j][0] == 0:
            j += 1
    if j >= m:
        ans.append(a[i])
    elif a[i] >= bc[j][1]:
        ans.append(a[i])
    else:
        ans.append(bc[j][1])
        bc[j][0] -= 1

print(sum(ans))
