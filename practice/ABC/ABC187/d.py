n = int(input())

a_sum = 0
b_sum = 0
ab = []
for i in range(n):
    a, b = map(int, input().split())
    a_sum += a
    # b_sum += b
    ab.append([a, b, 2*a+b])

ab.sort(key=lambda x: x[2], reverse=True)
ans = 0
while b_sum <= a_sum:
    b_sum += ab[ans][0] + ab[ans][1]
    a_sum -= ab[ans][0]
    ans += 1

print(ans)
