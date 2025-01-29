// #include<simplecpp>

// main_program{

// unsigned int a, p;

// unsigned int res = 1;

// cin >> a >> p;

// repeat(p){

// res *= a;

// }

// cout << res << endl;

// }


#include  <simplecpp>

main_program{
    unsigned int result = 1;

    unsigned int a , p ;
    cin >> a >> p ; 

    // we are finding a to the power p .
    
    while (p!= 0){
        if (p%2 != 0){
            result *= a;
        }
        p = p/2;
        a = a* a;
    }
    std::cout << result;
}