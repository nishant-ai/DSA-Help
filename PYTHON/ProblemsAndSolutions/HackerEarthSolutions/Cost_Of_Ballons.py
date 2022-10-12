T = int(input())
N = 0
for _ in range(T):
    n = input().split(" ")
    N1 = int(input())
    for i in range(N1):
        a = input().split(" ")
        if (_ % 2 != 0):
            N = N + (int(a[0])*int(n[1]) + int(a[1])*int(n[0]))
        else:
            N = N + (int(a[0])*int(n[0]) + int(a[1])*int(n[1]))
    print(N)
    N = 0
