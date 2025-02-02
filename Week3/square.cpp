#include <simplecpp>

main_program
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++) 
            {
                cout << "* ";
            }
        }

        else if (i % 2 == 0)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "* ";
                }
                else if (j % 2 == 0)
                {
                    cout << "- ";
                }
                else if (j % 2 != 0)
                {
                    cout << "+ ";
                }
            }
        }

        else if (i % 2 != 0)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "* ";
                }
                else if (j % 2 == 0)
                {
                    cout << "+ ";
                }
                else if (j % 2 != 0)
                {
                    cout << "- ";
                }
            }
        }

        cout<<endl;
    }
}