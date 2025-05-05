#include <iostream>
#include <vector>
using namespace std;

vector<int> countSort(int n, int inputArray[])
{

    int max = 0;
    for (int i = 0; i < n; i++)
        if (inputArray[i] > max)
            max = inputArray[i];

    vector<int> countArray(max + 1, 0);

    for (int i = 0; i < n; i++)
        countArray[inputArray[i]]++;

    for (int i = 1; i <= max; i++)
        countArray[i] += countArray[i - 1];

    vector<int> outputArray(n);
    for (int i = n - 1; i >= 0; i--)
    {
        outputArray[countArray[inputArray[i]] - 1] = inputArray[i];
        countArray[inputArray[i]]--;
    }

    return outputArray;
}

int main()
{
    int n;
    cin >> n;
    int inputArray[n];
    for (int i = 0; i < n; i++)
        cin >> inputArray[i];

    vector<int> outputArray = countSort(n, inputArray);
    for (int i = 0; i < n; i++)
    {
        cout << outputArray[i] << " ";
    }

    return 0;
}