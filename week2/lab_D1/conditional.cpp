#include <simplecpp>

main_program{
    int n;
    std::cin >> n;
    int i = 1;
    repeat(n){
        repeat(n-i){
            std::cout << "_";
        }
        repeat(2 *i -1){
            std::cout << "*";
        }
        repeat(n-i){
            std::cout << "_";
        }
        i++;
        std::cout << endl;
    }
    

}