class Queue:
    def __init__(self):
        self._queue = []
        self._length = 0

    def enqueue(self, item):
        '''
        Add an item to the queue and increment the length
        '''
        self._queue.append(item)
        self._length += 1

    def dequeue(self):
        '''
        Remove an item from the queue and decrement the length if the queue is not empty
        Otherwise, raise an exception
        '''
        if self._length > 0:
            self._length -= 1
            return self._queue.pop(0)
        else:
            raise IndexError('Queue is empty')

    def peek(self):
        '''
        Return the top item of the queue without removing it, if the queue is not empty
        Otherwise, raise an exception
        '''
        if self._length > 0:
            return self._queue[0]
        else:
            raise IndexError('Queue is empty')

    def __len__(self):
        '''
        Return the length of the queue
        '''
        return self._length

    def __str__(self):
        '''
        Return the queue as a string
        '''
        return str(self._queue)

    def __repr__(self):
        '''
        Return the queue as a string
        '''
        return str(self._queue)
        