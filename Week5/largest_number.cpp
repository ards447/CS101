#include <iostream>
using namespace std;

int giveLargest(int n);

int main()
{
    int n;
    cin >> n;

    int largest = giveLargest(n);
    cout << largest;

    return 0;
}

int giveLargest(int n)
{
    int number, largest_number = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> number;
        int largest = 0;

        while (number > 0)
        {
            largest = (number % 10 > largest) ? (number % 10) : largest;
            number = number / 10;
        }

        largest_number = largest_number * 10 + largest;
    }

    return largest_number;
}