#include <iostream>
using namespace std;

struct Time
{
    int hours;
    int minutes;
};

int main()
{
    Time t1, t2;

    cin >> t1.hours >> t1.minutes;
    cin >> t2.hours >> t2.minutes;

    int hp, mp, hm, mm;

    hp = t1.hours + t2.hours;
    mp = t1.minutes + t2.minutes;

    if (mp >= 60)
    {
        hp++;
        mp -= 60;
    }

    hm = t1.hours - t2.hours;
    hm = hm > 0 ? hm : -hm;

    if (t1.hours >= t2.hours)
    {
        mm = t1.minutes - t2.minutes;
        if (mm < 0)
        {
            hm--;
            mm += 60;
        }
    }
    else
    {
        mm = t2.minutes - t1.minutes;
        if (mm < 0)
        {
            hm--;
            mm += 60;
        }
    }

    cout << hp << " hrs " << mp << " mins" << endl;
    cout << hm << " hrs " << mm << " mins" << endl;

    return 0;
}
