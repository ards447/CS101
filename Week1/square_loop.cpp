#include <simplecpp>

main_program {
    float side = 200;

    turtleSim();

    repeat(100) {
        repeat(4) {
            forward(side);
            right(90);
        }

        penUp();
        forward(side/2);
        right(45);
        side = side/sqrt(2);
        penDown();
        wait(1);
    }
    getClick();
}