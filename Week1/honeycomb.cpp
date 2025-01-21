#include <simplecpp>

main_program
{
  turtleSim();

  repeat(6)
  {
    repeat(5)
    {
      forward(5);
      penUp();

      forward(5);
      penDown();
    }
    right(60);

    repeat(5)
    {
      forward(50);
      right(60);
    }
    penUp();
    forward(50);
    penDown();
    left(60);
  }
  hide();
  getClick();
}
