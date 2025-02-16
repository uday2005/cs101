#include <simplecpp>
main_program {
int a,b,c;
cin >>a >>b >>c;

if (b>a){
    a = b;
}
if (c>a){
    a = c;
}

if (a==b==c ){
    std::cout << "Equilateral & Acute";
}
else if ( b * b + c* c == a* a){
    std::cout << "Right & Scalene";
}
else if()



}