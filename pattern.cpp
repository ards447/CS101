#include <simplecpp>

main_program {
    float nsides;
    cout<<"No of sides: ";
    cin>>nsides;

    turtleSim();
    repeat(nsides) {
        forward(100/nsides);
        right(360/nsides);
    }
    getClick();
}