N = int(input())

lower_divisors, upper_divisors = [], []
i = 1

while i**2 <= N:
    if N % i == 0:
        lower_divisors.append(i)
        if i != N // i:
            upper_divisors.append(N//i)
    i += 1

all_divisors = lower_divisors + upper_divisors[::-1]

for divisor in all_divisors:
    print(divisor)
