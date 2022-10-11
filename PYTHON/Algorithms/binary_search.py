#  binary_search.py
from typing import Union


def binary_search(array: list, target: Union[int, str, float]) -> str:
    lower_bound, upper_bound = 0, len(array) - 1
    step = 0
    while lower_bound <= upper_bound:
        step += 1
        mid = (lower_bound + upper_bound) // 2
        if target > array[mid]:
            lower_bound = mid + 1
        elif target < array[mid]:
            upper_bound = mid - 1
        elif array[mid] == target:
            return f"The target {target} is at position {mid} and step = {step}."
    return "Not found"
