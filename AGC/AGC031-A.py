N = int(input())
S = input()
ch = []
for i in S:
    if not i in ch[0]:
        ch[0].append("i")
        ch[1].append(1)
    else:
        idx = ch[0].index(i)
        ch[1][idx] += 1

ans = 1
for i in ch[1]:
    ans *= i + 1

print(ans % (10**9 + 7))
