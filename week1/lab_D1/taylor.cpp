#include <simplecpp>

main_program{

    double  degree  = 90;
    double pi = 3.14159265359;
    double x = (degree * pi )/(180.0);

    double sin_x = 0;
    double fact = 1;
    double i = 2;
    double x_pow = x;

    repeat(500){
        sin_x += x_pow / fact;

        x_pow *=  -1* x* x;
        fact = fact * i* (i+1);
        i += 2;
        std::cout << "The value is sinx is " << sin_x << std::endl;
    }
    std::cout << "The Final of value of sinx is" << sin_x;
}

























