#include <simplecpp>
#include <iomanip>

main_program{
    double num;
    cin >> num;

    double high = num;
    double low = 0;
    double ephsilon = 0.000001;


    while ((high-low) >= ephsilon){
        double mid = (high + low) /2;
        if (mid * mid >= num){
         
            high = mid;
        }
        else{
            low = mid;
        }
    }

    std::cout  <<std::fixed<< std::setprecision(6) << (high + low)/2;
}

double  newtonsqrt(double n){
    const float ephsilon = 0.00001;
    double new_x;
    double x = n; // initial guess
    while (true){
        new_x = 0.5 *(x+n/x);

        if (abs(x-new_x) < ephsilon){
            break;
        }
        x= new_x;
    }
    return x;
}

double binarysqrt(int n){
    double ephsilon = 0.000001;
    double high = n;
    double low = 0;

    if (n <1) high = 1;  // Fix the number b/w 0 an d 1.

    while ((high - low) >= ephsilon){
        double mid = (high + low) /2;

        if (mid * mid > n) high = mid;
        else low = mid;
    }
    return (high + low)/2;
}

// we can also make it more efficient by making it working for less than 1 
