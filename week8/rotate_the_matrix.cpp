#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    int matrix[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> matrix[i][j];
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = r; j > 0; j--)
            cout << matrix[j - 1][i] << " ";

        cout << endl;
    }

    return 0;
}