# Problem
# A problem setter is called an expert if at least 50% of their problems are approved by Chef.

# Munchy submitted X problems for approval. If Y problems out of those were approved, find whether Munchy is an expert or not.

# Input Format:
# The first line of input will contain a single integer T, denoting the number of test cases.
# Each test case consists of a two space-separated integers X and Y - the number of problems submitted and the number of problems that were approved by Chef.

# Output Format:
# For each test case, output on a new line YES, if Munchy is an expert. Otherwise, print NO.

# The output is case-insensitive. Thus, the strings YES, yes, yeS, and Yes are all considered the same.

# Constraints:
# 10001 ≤ T ≤ 1000
# 10^61 ≤ Y ≤ X ≤ 10^6

for i in range(int(input())):
    l=list(map(int,input().split()))
    if l[0]/2 <= l[1]:
        print("YES")
    else:
        print("NO")
        
# Input:
#   4
#   5 3
#   1 1
#   4 1
#   2 1

# Output:
#   YES
#   YES
#   NO
#   YES

# Explanation:
# Test case 1: We are given that 33 out of 55 problems were approved. 
#               Thus, 60% of the problems were approved. Since at least 50% of the problems were approved, Munchy is an expert. 

# Test case 2: We are given that 11 out of 11 problems were approved.
#               Thus, 1100% of the problems were approved. Since at least 50% of the problems were approved, Munchy is an expert.

# Test case 3: We are given that 11 out of 44 problems were approved. 
#               Thus, 25% of the problems were approved. Since at least 50% of the problems were not approved, Munchy is not an expert.

# Test case 4: We are given that 11 out of 22 problems were approved. 
#               Thus, 50% of the problems were approved. Since at least 50% of the problems were approved, Munchy is an expert.
