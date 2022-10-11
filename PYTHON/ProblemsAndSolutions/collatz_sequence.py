#  collatz_sequence.py
"""
Description:
This is a mathematical phenomenon whereby starting with any number,
it will always stop at 1 using the following mathematical concepts.
base number = ?
if the base number is even; divide it by 2, and the answer,
reassign it to the base number
else 3 * base number + 1
"""


def collatz(number: int) -> int:
    # It stops when the number equals 1.
    while number != 1:
        if number % 2 == 0:
            number //= 2
        else:
            number = 3 * number + 1
        print(number, end=" ")


response: int = int(input("Enter a number: ").strip())
collatz(response)
