#include <simplecpp>

main_program{
    turtleSim();
    repeat(4){
        repeat(6){
            forward(20);
            penUp();
            forward(20);
            penDown();
            }
    right(90);
    }
    getClick();
}