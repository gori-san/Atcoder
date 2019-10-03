n = int(input())
a = list(map(int, input().split()))
dic = {}
for i, num in enumerate(a):
    dic[num-1] = i+1

for i in range(n-1):
    print(dic[i], end=' ')
print(dic[n-1])
