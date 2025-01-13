#include <simplecpp>

main_program
{
    turtleSim();

    repeat(4)
    {
        forward(150);
        right(90);
        wait(0.4);
    }
    wait(6);
}