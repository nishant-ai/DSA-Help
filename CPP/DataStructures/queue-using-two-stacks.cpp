#include <iostream>
#include <stack>

using namespace std;

class Queue
{
    stack<int> s1, s2;

public:
    // This algorithm makes the push operation costly: O(n)
    void push(int num)
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(num);
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    void pop()
    {
        if (!s1.empty())
        {
            s1.pop();
        }
    }

    int front()
    {
        if (!s1.empty())
        {
            return s1.top();
        }
        return -1;
    }

    int size()
    {
        return s1.size();
    }
};

int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout << q.front() << "\n";
    q.pop();
    cout << q.front() << "\n";
    q.pop();
    cout << q.front() << "\n";
    q.pop();
    cout << q.front() << "\n";
}