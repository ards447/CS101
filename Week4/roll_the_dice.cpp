#include <simplecpp>
#include <time.h>

main_program
{
    srand(time(NULL));

    int n;
    cin >> n;

    int random;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0;

    for (int i = 0; i < n; i++)
    {
        random = rand() % 6 + 1;
        if (random == 1)
            count1++;
        else if (random == 2)
            count2++;
        else if (random == 3)
            count3++;
        else if (random == 4)
            count4++;
        else if (random == 5)
            count5++;
        else if (random == 6)
            count6++;
    }

    cout << "1: " << count1 << endl;
    cout << "2: " << count2 << endl;
    cout << "3: " << count3 << endl;
    cout << "4: " << count4 << endl;
    cout << "5: " << count5 << endl;
    cout << "6: " << count6 << endl;
}