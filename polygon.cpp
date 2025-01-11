#include <simplecpp>

main_program{
  turtleSim();
  int nsides = 6; 
  repeat(nsides){
    forward(400.0/nsides); // so by doing numerator as float we making overall float 
    right(360.0/nsides);
  }
  getClick();
}