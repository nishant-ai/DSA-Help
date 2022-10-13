# Problem:

# Chef has a binary string S of length N.

# In one operation, Chef can:

# Select two indices i and j ( 1 ≤ i, j ≤ N, i >= j ) and flip S_i and S_j. (i.e. change 0 to 1 and 1 to 0)

# For example, if S = 10010 and chef applys operation on i = 1 and j = 3 then: 10010 → 00110.
#                                                                              ^ ^

# Find if it is possible to convert S to a palindrome by applying the above operation any (possibly zero) number of times.

# Note: A string is called a palindrome if it reads the same backwards and forwards, for e.g. 10001 and 0110 are palindromic strings.

# Input Format:
# The first line contains a single integer T — the number of test cases. Then the test cases follow.
# The first line of each test case contains an integer N — the length of the binary string SS.
# The second line of each test case contains a binary string S of length N containing 0s and 1s only.

# Output Format:
# For each test case, output YES if it is possible to convert S to a palindrome. Otherwise, output NO.

# You can print each character of the string in uppercase or lowercase. For example, the strings YES, yes, Yes, and yEs are all considered the same.

# Constraints
# 1 ≤ T ≤ 10^5 
# 1 ≤ N ≤ 10^5
# S contains 0 and 1 only.
# Sum of N over all test cases does not exceed 2*10^5.

# Solution:
for i in range(int(input())):
    n=int(input())
    s=input()
    if n==2 and s.count('1')==0 or s.count('0')==0:
        print("YES")
    elif n==2:
        print("NO")
    elif s.count('1')%2==0 or s.count('0')%2==0:
        print("YES")
    else:
        print("NO")
        
# Input:
#   3
#   6
#   101011
#   2
#   01
#   7
#   1110000

# Output:
#   YES
#   NO
#   YES

# Explanation:
# Test case 1: We can perform the following operation:

#              Select i = 3 and j = 5. Then 101011 → 100001, which is a palindrome.

# Test case 2: It can be proven that we can not make SS a palindrome using the given operation.

# Test case 3: We can perform the following operations:

#              Select i = 4 and j = 5. Then 1110000 → 1111100
#                                              ^^

#              Select i = 6 and j = 7. Then 1111100 → 11111111, which is a palindrome.
#                                                ^^
