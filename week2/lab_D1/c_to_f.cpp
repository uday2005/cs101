#include <simplecpp>
#include <iomanip>

main_program{
double fahrenheit;
double celcius;

std::cin >> celcius;
fahrenheit = ( 9 * celcius )/5 + 32;
std::cout << std::fixed << std::setprecision(2) << fahrenheit << endl;

}

