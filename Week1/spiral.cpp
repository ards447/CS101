#include <simplecpp>

main_program {
    turtleSim();

    float i = 0.1;

    repeat(100) {
        forward(i);
        right(20);
        i+=0.1;
    }
    wait(6);
}