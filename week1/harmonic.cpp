#include <simplecpp>

main_program{
    int nterms;
    std::cout << "Enter the number of terms" << std::endl;
    std::cin >> nterms;

    int n = 1;
    int sign = 1;
    float out = 0.0;

    repeat(nterms){
        out += sign * (1.0/n);
        n += 1;
        sign *= -1;

    }
    std::cout << "Result:" << out << std::endl;

}