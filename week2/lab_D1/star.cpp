#include <simplecpp>

main_program{
    int n;
    cin >> n;
    turtleSim();
    repeat(n){

        left(360.0/n); wait(2);
        forward(50);
        right(720.0/n); wait(2);
        forward(50);
        
    }
    getClick();
}
