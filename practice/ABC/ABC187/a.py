a, b = map(int, input().split())

sum_a = sum(list(map(int, str(a))))
sum_b = sum(list(map(int, str(b))))

print(sum_a) if sum_a > sum_b else print(sum_b)
