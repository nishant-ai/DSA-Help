# Palindrome Checker Program in Python
# Checks if the given user input is a Palindrome or not

def checkPalindrome(x):
    if (x == x[::-1]):
        return True
    else:
        return False

user = input("Enter a number or a word:")
print(checkPalindrome(user))
