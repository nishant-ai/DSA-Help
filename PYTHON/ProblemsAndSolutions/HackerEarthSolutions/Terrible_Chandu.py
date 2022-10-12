T = int(input())
for j in range(T):
    N = input()
    ans = []
    for i in range(len(N)-1, -1, -1):
        ans.append(N[i])
    print("".join(ans))
