#include <simplecpp>

using namespace std;

 void tree (int n){
    if (n==0) {
        return;}
 turtleSim();
 forward(n);
 left(20);
 tree(n-1);
 

 }
main_program{

    int n;
    cin>> n;
    tree(n);
}