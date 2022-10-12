N = int(input())
Q = input().split(" ")
Q = list(map(int, Q))
ans = 1
for i in range(N):
    ans = (ans*Q[i]) % (10**9+7) 
print(ans)
