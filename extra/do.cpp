#include <simplecpp>
main_program{
turtleSim();
wait(1);
 // first drawing the pentagon
 right(72); wait(1);
 repeat(5){
 forward(50);
 left(72);
 forward(50);
 right(144); wait(5);
 }
 wait(5);
 //fitting the circle onto it
 left(72);
 repeat(100){
 forward(4.32331405);
 right(3.6);
 }
 getClick();
}

