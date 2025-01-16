#include <simplecpp>

main_program{
  turtleSim();
  int nsides = 40;
  repeat(nsides){
    forward(400.0/nsides);
    right(360.0/nsides);
  }

  forward(5); right(90);
  penUp(); 
  forward(50); right(90); forward(10);
  penDown(); forward(20); right(180);
  penUp(); forward(30); forward(10);
  penDown(); forward(20);

  hide();
  getClick();
}