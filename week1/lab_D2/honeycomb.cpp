#include <simplecpp>

main_program{
    turtleSim();
    left(120);
    repeat(6){
       repeat(5){
        forward(50); wait(0.4);
        right(60); wait(0.4);
       }
       left(60);
       forward(50);
      
    }
    getClick();
}