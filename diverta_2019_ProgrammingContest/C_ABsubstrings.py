n = int(input())
s = [input() for _ in range(n)]

end_A = 0
start_B = 0
AB_count = 0
both = 0

for i in range(n):
    if 'AB' in s[i]:
        AB_count += s[i].count('AB')
    if s[i][0] == 'B':
        start_B += 1
    if s[i][len(s[i])-1] == 'A':
        end_A += 1
    if s[i][0] == 'B' and s[i][len(s[i])-1] == 'A':
        both += 1
start_B -= both
end_A -= both

if both == 0:
    print(AB_count + min(start_B, end_A))
elif end_A + start_B > 0:
    print(AB_count + both + min(start_B, end_A))
else:
    print(AB_count + both - 1)
