N = 6
val = []
for i in range(N):
    val.append(int(input()))

if val[4]-val[0] <= val[5]:
    print('Yay!')
else:
    print(':(')
