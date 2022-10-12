T = int(input())
n = input()

if ("HH" in n):
    f = "NO"
else:
    f = "YES"
print(f)
ans = []
if f == "YES":
    for i in range(T):
        if (n[i] == "H"):
            ans.append("H")
        else:
            ans.append("B")
print("".join(ans))
