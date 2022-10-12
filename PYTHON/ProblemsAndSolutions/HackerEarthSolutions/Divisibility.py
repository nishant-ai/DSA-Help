T = int(input())
N = input().split(" ")
A = []
for i in range(T):
    A.append(N[-1])
n = "".join(A)
if (int(n) % 10 == 0):
    print("Yes")
else:
    print("No")
