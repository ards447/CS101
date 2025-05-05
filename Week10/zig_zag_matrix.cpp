#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n] = {};
    
    for (int i = 0; i < n * n; i++)
    {
        arr[(i % n)] = i + 1;
        if ((i+1) % n == 0)
        {
            if ((i/n) % 2 == 0)
                for (int j = 0; j < n; j++)
                    cout << arr[j] << " ";
            else
                for (int j = n; j > 0; j--)
                    cout << arr[j - 1] << " ";
            cout << endl;
        }
    }

    return 0;
}