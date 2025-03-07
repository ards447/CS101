#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str[n], partialWord;
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    cin >> partialWord;
    bool isFound = false;

    for (int i = 0; i < n; i++)
    {
        if (str[i].length() != partialWord.length())
            continue;

        bool isMatching = true;

        for (int j = 0; j < partialWord.length(); j++)
        {
            if (partialWord[j] == '_')
                continue;

            if (partialWord[j] != str[i][j])
            {
                isMatching = false;
                break;
            }
        }

        if (isMatching)
        {
            cout << str[i] << endl;
            isFound = true;
            if (isFound)
                break;
        }
    }

    if (isFound == false)
    {
        cout << "Not Possible";
    }

    return 0;
}