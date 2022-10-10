N = input()
ans = []
for i in range(len(N)):
    if (N[i].islower()):
        ans.append(N[i].upper())
    else:
        ans.append(N[i].lower())
print("".join(ans))
