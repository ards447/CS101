#include <simplecpp>

main_program {
    turtleSim();

    repeat(4) {
        repeat(100) {
            forward(1);
            penUp();
            
            forward(1);
            penDown();
        }
        right(90);
    }
    getClick();
}