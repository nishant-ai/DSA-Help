# fibonacci.py
"""
Factorial is a mathematical function of f(n!):
Mathematical formulae: n * (n - 1)!
Further explanation: Factorial. (2022, October 4).
In Wikipedia. https://en.wikipedia.org/wiki/Factorial
"""


def factorial(starting_number: int) -> int:
    if starting_number == 0 or starting_number == 1:
        return 1

    #  This is a recursive call: where it multiplies the previous with now - 1
    fib = starting_number * factorial(starting_number - 1)
    return fib

