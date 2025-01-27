// Author: Om Godage
// Date: 13/1/25

#include<simplecpp>

main_program{
    turtleSim();
    int n;
    cin >> n;
    // Consider an n-sided polygon at the center
    // and on each of its n sides, create an n-sided polygon
    // sharing that side, creating the polygon
    
    // looping over each of the n sides of the central polygon
    repeat(n){
        // this loop creates the polygon on the outside
        repeat(n){
            forward(50);
            right(360.0/n);
        }
        // moving over the edge of the central polygon,
        // and rotating by external angle
        forward(50);
        left(360.0/n);
    }
    getClick();
}


