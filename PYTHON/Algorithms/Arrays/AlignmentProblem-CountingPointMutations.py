# Given two strings s and t of equal length, the Hamming distance between s and t, denoted dH(s,t),
# is the number of corresponding symbols that differ in s and t. See Figure 2.
# Given: Two DNA strings s and t of equal length (not exceeding 1 kbp).
# Return: The Hamming distance dH(s,t).

# link to problem:https://rosalind.info/problems/hamm/


def dH(s,t):
    hamm = 0
    for i in range(len(s)):
        if s[i] == t[i]:
            pass
        else:
            hamm +=1

    return hamm

if __name__ == '__main__':
    print(dH('GAGCCTACTAACGGGAT','CATCGTAATGACGGCCT'))



