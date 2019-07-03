s = input()
ss = list(set([s[0], s[1], s[2], s[3]]))
flag = True
if len(ss) != 2:
    flag = False
else:
    for i in range(len(ss)):
        if s.count(ss[i]) == 2:
            continue
        else:
            flag = False
            break

if flag:
    print('Yes')
else:
    print('No')
