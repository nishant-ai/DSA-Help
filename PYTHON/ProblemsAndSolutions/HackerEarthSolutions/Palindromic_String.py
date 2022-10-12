S = input()
B = []
for i in range(1, len(S)+1):
    B.append(S[-i])
B = "".join(B)
if (S == B):
    print("YES")
else: 
    print("NO")
