/// C++ Program to find Euler Totient Function
#include <iostream>

/* Euler Totient Function is also known as phi function
* phi(n) = phi(ph1^a1).phi(p2^a2)
* where p1, p2,... are prime factors of n.
* 3 euler's properties:
* 1. phi(prime_no) = prime_no-1
* 2. phi(prime_no^k) = (prime_no^k - prime_no^(k-1))
* 3. phi(a, b) = phi(a). phi(b) where a and b are relative primes.
* Applyng this 3 properties on the first equation.
* phi(n) = n. (1-1/p1). (1-1/p2). ...
* where p1, p2... are prime factors.
* Hence Implementation in 0(sqrt(n))
* phi(100) = 40
* phi(1) = 1
* phi(17502) = 15120
* phi(1420) = 560
*/

// Function to calculate Euler's totient phi
int phiFunction(int n)
{
    int restul = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            restul -= restul/i;
        }
    }
    if (n > 1) restul -= restul /n;
    return restul;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << phiFunction(n);
}