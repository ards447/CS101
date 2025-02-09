#include <simplecpp>

bool isAnagram(int m, int n);

main_program
{
    int t, m, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> m >> n;

        cout << (isAnagram(m, n) ? 1 : 0) << endl;
    }
}

bool isAnagram(int m, int n)
{

    string str1, str2;
    cin >> str1 >> str2;

    if (m != n)
        return false;

    int sum1 = 0, sum2 = 0;
    int64_t prod1 = 1, prod2 = 1;
    char ch;

    for (int i = 0; i < m; i++)
    {
        ch = str1[i];
        ch = tolower(ch);
        sum1 += ch;
        prod1 *= ch;
    }

    for (int i = 0; i < n; i++)
    {
        ch = str2[i];
        ch = tolower(ch);
        sum2 += ch;
        prod2 *= ch;
    }

    return (sum1 == sum2 && prod1 == prod2);
}