#include <simplecpp>

main_program
{
    int n, p=1;
    char ch;
    cin >> n;

    while (p <= n)
    {
        p = p*16;
    }
    p = p/16;

    while (p>=1)
    {
        if (n>=p)
        {
            if (n/p >= 10)
            {
                ch = 'A' + (n/p) %10;
                cout << ch;
            }
            else
                cout << n/p;
            n = n%p;
        }
        else
            cout << 0;

        p = p/16;
    }
    cout<<endl;   
}