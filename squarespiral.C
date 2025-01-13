#include <simplecpp>

main_program {
	turtleSim();

	int side = 10;
	
	repeat (100) {
		forward(side);
		right(90);
		side+=10;
	}

	getClick();
}