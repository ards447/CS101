#include <simplecpp>

main_program
{
    int age;
    cin >> age;

    if (age >= 2 && age <= 3)
    {
        cout << "Pre-reader" << endl;
    }
    else if (age >= 4 && age <= 5)
    {
        cout << "Beginning reader" << endl;
    }
    else if (age >= 6 && age <= 7)
    {
        cout << "Intermediate reader" << endl;
    }
    else if (age >= 8)
    {
        cout << "Advanced reader" << endl;
    }
    else
        cout << "Invalid" << endl;
}