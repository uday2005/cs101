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