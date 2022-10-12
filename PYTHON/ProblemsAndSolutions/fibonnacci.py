#  fibonnacci.py

"""
For explanation:
Fibonacci number. (2022, October 11).
In Wikipedia. https://en.wikipedia.org/wiki/Fibonacci_number
"""


def fibonnacci(starting_number: int):
    f = [0, 1]
    for number in range(starting_number - 2):
        answer = f[number] + f[number + 1]
        f.append(answer)

    return f
