#include <iostream>
using namespace std;

int main()
{
    int N[26];
    for (int i = 0; i < 26; i++)
    {
        N[i] = 0;
    }

    char ch;
    for (cin >> ch; ch >= 'a' && ch <= 'z'; cin >> ch)
        N[ch - 'a']++;

    for (char ch = 'a'; ch <= 'z'; ch++)
        cout << "#" << ch << " = " << N[ch - 'a'] << endl;
}