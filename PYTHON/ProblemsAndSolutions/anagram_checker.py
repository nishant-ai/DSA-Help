#  anagram_checker.py


def anagram_check(word1: str, word2: str):
    # if there is a large space between the text.
    list1: list = sorted(word1.lower().strip().replace(' ', ''))
    list2: list = sorted(word2.lower().strip().replace(' ', ''))
    return True if list1 == list2 else False


response1 = input("Enter the first string: ").strip()
response2 = input("Enter the second stringL ").strip()
print(anagram_check(response1, response2))
