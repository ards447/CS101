#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int p1 = 0, p2 = 0, i = 0, turn = 1, m = n;
    while (turn <= m)
    {
        if (arr[i] - arr[i + 1] >= 0 && arr[n - 1] - arr[n - 2] >= 0)
        {
            if (turn % 2 != 0)
            {
                if (arr[i] > arr[n - 1])
                {
                    p1 += arr[i];
                    i++;
                }
                else if (arr[i] == arr[n - 1])
                {
                    if (arr[i] - arr[i + 1] >= arr[n - 1] - arr[n - 2])
                    {
                        p1 += arr[n - 1];
                        n--;
                    }
                    else
                        p1 += arr[i];
                    i++;
                }
                else
                {
                    p1 += arr[n - 1];
                    n--;
                }
            }
            else
            {
                if (arr[i] > arr[n - 1])
                {
                    p2 += arr[i];
                    i++;
                }
                else if (arr[i] == arr[n - 1])
                {
                    if (arr[i] - arr[i + 1] >= arr[n - 1] - arr[n - 2])
                    {
                        p2 += arr[n - 1];
                        n--;
                    }
                    else
                        p2 += arr[i];
                    i++;
                }
                else
                {
                    p2 += arr[n - 1];
                    n--;
                }
            }
        }
        else if (arr[i] - arr[i + 1] < 0 && arr[n - 1] - arr[n - 2] >= 0)
        {
            if (turn % 2 != 0)
            {
                p1 += arr[n - 1];
                n--;
            }
            else
            {
                p2 += arr[n - 1];
                n--;
            }
        }
        else if (arr[i] - arr[i + 1] >= 0 && arr[n - 1] - arr[n - 2] < 0)
        {
            if (turn % 2 != 0)
            {
                p1 += arr[i];
                i++;
            }
            else
            {
                p2 += arr[i];
                i++;
            }
        }
        else
        {
            if (turn % 2 != 0)
            {
                if (arr[i] - arr[i + 1] < arr[n - 1] - arr[n - 2])
                {
                    p1 += arr[n - 1];
                    n--;
                }
                else if (arr[i] - arr[i + 1] > arr[n - 1] - arr[n - 2])
                {
                    p1 += arr[i];
                    i++;
                }
                else
                {
                    if (arr[i] >= arr[n - 1])
                    {
                        p1 += arr[i];
                        i++;
                    }
                    else
                    {
                        p1 += arr[n - 1];
                        n--;
                    }
                }
            }
            else
            {
                if (arr[i] - arr[i + 1] < arr[n - 1] - arr[n - 2])
                {
                    p2 += arr[n - 1];
                    n--;
                }
                else if (arr[i] - arr[i + 1] > arr[n - 1] - arr[n - 2])
                {
                    p2 += arr[i];
                    i++;
                }
                else
                {
                    if (arr[i] >= arr[n - 1])
                    {
                        p2 += arr[i];
                        i++;
                    }
                    else
                    {
                        p2 += arr[n - 1];
                        n--;
                    }
                }
            }
        }
        turn ++;
    }

    cout << p1;
    return 0;
}