#  bubble_sort.py

"""
For explanation:
Bubble sort. (2022, September 9).
In Wikipedia. https://en.wikipedia.org/wiki/Bubble_sort
"""


def bubble_sort(array: list) -> list:
    for i in range(len(array) - 1, 0, -1):
        for j in range(i):
            # if the first element is greater than the next, they will swap position
            if array[j] > array[j + 1]:
                array[j], array[j + 1] = array[j + 1], array[j]
            # else it leaves them in their position and move on.

    return array
