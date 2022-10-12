import re
n = input()
v = ["A","E","I","O","U","Y"]
N = 0
for i in range(len(v)):
    if (v[i] == n[2]):
        N+=1
if N<=0:
    x = re.findall("[0-9]", n)
    x = list(map(int, x))
    if ((x[0]+x[1]) % 2 == 0 and (x[2]+x[3]) % 2 == 0 and (x[3]+x[4]) % 2 == 0 and (x[5]+x[6]) % 2 == 0):
        ans = "valid"
    else:
        ans = "invalid"
else:
    ans = "invalid"
print(ans)
