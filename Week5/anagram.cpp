#include <iostream>
using namespace std;

bool isAnagram(unsigned int num1, unsigned int num2);

int main()
{
    unsigned int num1, num2;
    cin >> num1 >> num2;

    cout << (isAnagram(num1, num2) ? "Yes" : "No");

    return 0;
}

bool isAnagram(unsigned int num1, unsigned int num2)
{
    unsigned int sum1 = 0, sum2 = 0;
    unsigned int prod1 = 1, prod2 = 1;

    while (num1)
    {
        sum1 += (num1 % 10);
        prod1 *= (num1 % 10);

        num1 /= 10;
    }

    while (num2)
    {
        sum2 += (num2 % 10);
        prod2 *= (num2 % 10);

        num2 /= 10;
    }

    return (sum1 == sum2 && prod1 == prod2);
}