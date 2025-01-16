#include <simplecpp>

main_program {
  turtleSim();

  int x = 5;
  repeat(50) {
    forward(x); right(90); wait(0.1);
    x = x+5;
  }

  hide();
  getClick();
}