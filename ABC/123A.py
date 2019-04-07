A = []
for i in range(5):
    A.append(int(input()))
k = int(input())
maxA = max(A)
minA = min(A)
lenA = maxA - minA
if lenA <= k:
    print("Yay!")
else:
    print(":(")