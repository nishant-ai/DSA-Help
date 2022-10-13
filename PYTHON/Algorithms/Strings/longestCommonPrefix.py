# Write a function to find the longest common prefix string amongst an array of strings.

# If there is no common prefix, return an empty string "".

 

# Example 1:

# Input: strs = ["flower","flow","flight"]
# Output: "fl"

def longestCommonPrefix(strs):
    output = ""
    for x in range(len(strs[0])):
            a = strs[0][:(x+1)]
            if all(value.startswith(a) for value in strs):
                output = a
    return output

strs = input().split()
print("Longest Common Prefix: ", end=" ")
print(longestCommonPrefix(strs))