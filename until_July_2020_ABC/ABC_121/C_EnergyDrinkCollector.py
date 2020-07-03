N, M = map(int, input().split())
dic = {}
for i in range(N):
    A, B = map(int, input().split())
    if A in dic:
        dic[A] += B
    else:
        dic[A] = B


drink_num = 0
drink_cost = 0
for key, value in sorted(dic.items()):
    if drink_num + value >= M:
        drink_cost += (M - drink_num)*key
        break
    else:
        drink_cost += key*value
        drink_num += value

print(drink_cost)
