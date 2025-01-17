#include <simplecpp>

main_program{
    int n;
    cin >> n;
    turtleSim();
    repeat(n){
        left(360.0/n);
        forward(2);
        right(720.0/n);
        forward(2);
        
    }
    getClick();
}