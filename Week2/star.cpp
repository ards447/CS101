#include <simplecpp>

main_program
{
    int points;
    cin >> points;

    float angle = 360 / float(points);
    float angle2= 30+angle;

    turtleSim();
    repeat(points)
    {
        forward(50);
        right(150);
        forward(50);
        left(180-angle2);
    }
    hide();
    getClick();
}