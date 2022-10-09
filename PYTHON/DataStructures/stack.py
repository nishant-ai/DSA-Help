class Stack:
    def __init__(self):
        self._stack = []
        self._length = 0

    def push(self, item):
        '''
        Add an item to the stack and increment the length
        '''
        self._stack.append(item)
        self._length += 1

    def pop(self):
        '''
        Remove an item from the stack and decrement the length if the stack is not empty
        Otherwise, raise an exception
        '''
        if self._length > 0:
            self._length -= 1
            return self._stack.pop()
        else:
            raise IndexError('Stack is empty')

    def peek(self):
        '''
        Return the top item of the stack without removing it, if the stack is not empty
        Otherwise, raise an exception
        '''
        if self._length > 0:
            return self._stack[-1]
        else:
            raise IndexError('Stack is empty')

    def __len__(self):
        '''
        Return the length of the stack
        '''
        return self._length

    def __str__(self):
        '''
        Return the stack as a string
        '''
        return str(self._stack)

    def __repr__(self):
        '''
        Return the stack as a string
        '''
        return str(self._stack)

