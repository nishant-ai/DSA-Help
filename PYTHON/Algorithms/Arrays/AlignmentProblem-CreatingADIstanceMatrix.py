# Problem
# For two strings s1 and s2 of equal length,
# the p-distance between them, denoted dp(s1,s2), is the proportion of corresponding symbols that differ between s1 and s2.
#
# For a general distance function d on n taxa s1,s2,…,sn
# (taxa are often represented by genetic strings),
# we may encode the distances between pairs of taxa via a distance matrix D in which Di,j=d(si,sj).
#
# Given: A collection of n (n≤10) DNA strings s1,…,sn of equal length (at most 1 kbp). Strings are given in FASTA format.
#
# Return: The matrix D corresponding to the p-distance dp on the given strings.
# As always, note that your answer is allowed an absolute error of 0.001

# problem link: https://rosalind.info/problems/pdst/

def emptyMatrix(size):
    rows, cols = size,size
    my_matrix = [([0]*cols) for i in range(rows)]
    return my_matrix

def distanceMatrix(sequenceList):
    seqL = sequenceList
    dist = 0
    D = emptyMatrix(len(seqL))
    for i in range(len(sequenceList)):
        for j in range(len(sequenceList)):
            for k in range(len(seqL[i])):
                if seqL[i][k] == seqL[j][k]:
                    pass
                else:
                    dist += 1
            pdist = dist/float(len(seqL[i]))
            D[j][i] = pdist
            dist = 0
    return D

if __name__ == '__main__':
    d = (distanceMatrix(['TTTCCATTTA','GATTCATTTC','TTTCCATTTT','GTTCCATTTA']))
    for i in d:
        print(i)

    # print('***************************************************************************')
    # # print(distanceMatrix(['TTTCCATTTA','TTTCCATTTA']))
    # # print('***************************************************************************')
    # # print(distanceMatrix(['TTTCCATTTA','GATTCATTTC','TTTCCATTTT','GTTCCATTTA','TTTCCATTTA']))
    # # print('***************************************************************************')
    # # print(distanceMatrix(['TTTCCATTTA', 'GTCCATTTTC', 'ATTCCATTTT', 'GTTCCATTTA','GTTCTTTCCA']))
    # # print('***************************************************************************')




