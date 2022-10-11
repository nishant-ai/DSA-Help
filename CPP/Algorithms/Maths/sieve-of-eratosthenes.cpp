#include <vector>
#include <iostream>

using namespace std;

void sieveOfEratosthenes(vector<bool> &isPrime, int n)
{
    for (int i = 2; i * i < n; i++)
    {
        if (isPrime[i])
        {
            // For any number, their multiples will not be prime
            // So, mark false for all of their multiples
            for (int j = i * i; j < n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    int n = 100001;
    vector<bool> isPrime(n, true);

    sieveOfEratosthenes(isPrime, n);
}