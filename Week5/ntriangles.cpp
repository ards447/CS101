#include <iostream>
using namespace std;

void print_starry_lines(int num_spaces, int num_stars);

int main()
{
    int n;
    cin >> n;

    int num_spaces, num_stars;

    for (int i = 1; i <= n; i++)
    {
        num_spaces = n - i;
        num_stars = i;
        print_starry_lines(num_spaces, num_stars);
        cout << endl;
    }

    return 0;
}

void print_starry_lines(int num_spaces, int num_stars)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < num_spaces; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * num_stars - 1; j++)
        {
            cout << "*";
        }
        for (int l = 0; l < num_spaces; l++)
        {
            cout << " ";
        }
        cout << " ";
    }
}