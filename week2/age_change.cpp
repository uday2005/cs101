#include <simplecpp>
main_program{
    int age;
    std::cin >> age;

    if (age < 2){
        std::cout << "Invalid"
    }
    else if (age >= 2 && age <= 3){
        std::cout << "Pre-reader"
    }
    else if (age >= 4 && age <= 5  ){
        std::cout << "Beginning reader"
    }
    else if (age >= 6 && age <= 7){
        std::cout << "Intermediate reader"
    }
    else{
        std::cout  << "Advanced reader"
    }

}
