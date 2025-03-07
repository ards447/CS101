#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string possibleWords[n];
    for (int i = 0; i < n; i++)
        cin >> possibleWords[i];

    string jumbleWord;
    cin >> jumbleWord;

    bool match;

    int Nj[26] = {};
    for (char ch : jumbleWord)
        Nj[ch - 'a']++;

    for (int i = 0; i < n; i++)
    {
        int Np[26] = {};
        for (char ch : possibleWords[i])
            Np[ch - 'a']++;

        match = true;

        for (int i = 0; i < 26; i++)
        {
            if (Np[i] != Nj[i])
            {
                match = false;
                break;
            }
        }

        if (match)
        {
            cout << possibleWords[i] << endl;
            break;
        }
    }

    if (!match)
        cout << "null" << endl;

    return 0;
}