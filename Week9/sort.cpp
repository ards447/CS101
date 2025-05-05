#include <iostream>
#include <vector>
using namespace std;

int maxValue(const vector<int> &arr)
{
    int max = 0;
    for (int i : arr)
        if (i > max)
            max = i;

    return max;
}

vector<int> count(int n, const vector<int> &arr)
{
    vector<int> countArray(maxValue(arr) + 1, 0);
    for (int i = 0; i < n; i++)
        countArray[arr[i]]++;

    return countArray;
}

vector<int> sort(int n, const vector<int> &arr)
{
    vector<int> countArray = count(n, arr);
    vector<int> outputArray(n, 0);

    int count = 0, i = 0;
    while (i < n)
    {
        if (countArray[count] == 0)
        {
            count++;
            continue;
        }

        outputArray[i] = count;
        countArray[count]--;
        i++;
    }

    return outputArray;
}

int main()
{
    int n;
    cin >> n;
    vector<int> inputArray(n);
    for (int i = 0; i < n; i++)
        cin >> inputArray[i];

    vector<int> outputArray = sort(n, inputArray);
    for (int i = 0; i < n; i++)
        cout << outputArray[i] << " ";

    cout << endl;
    return 0;
}