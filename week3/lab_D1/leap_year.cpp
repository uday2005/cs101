#include <simplecpp>

main_program{
    int years;
    cin >> years;

    if (years %400 ==0 ){
        std::cout << "Century Leap Year";
    }
    else if (years %4 ==0 && !(years %100 ==0)){
        std::cout << "Leap Year";
    }
    else{
        std::cout << "Not a Leap Year";
    }
}