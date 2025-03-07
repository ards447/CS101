#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    cin >> n;
    cout << "prime factors of n are: ";
    unsigned int i = 2;
    while (i <= n)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
        i = i + 1;
    }
}