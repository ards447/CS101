#include <simplecpp>

main_program {
    int side_no, loop_no;
    cout<<"Enter the number of sides: ";
    cin>>side_no;

    cout<<"Enter the number of loops: ";
    cin>>loop_no;

    turtleSim();

    repeat(loop_no) {
        repeat(side_no) {
            forward(200);
            right(360/side_no);
        }

        penUp();
        forward(100);
        right(180/side_no);
        penDown();
    }
    getClick();
}