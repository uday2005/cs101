#include <simplecpp>

main_program{
    int n;
    cin >> n;

    int factorial = 1;
    int i = 1;


    if (n == 0){
        factorial = 1;
    }
    else
    {
        repeat(n){
        factorial = factorial * i;
        i  = i+1;
        }
    }
    std::cout << factorial;
}