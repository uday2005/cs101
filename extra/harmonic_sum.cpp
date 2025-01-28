// #include <simplecpp>

// main_program{
   
//     int m; //No of terms in the harmonic series
//     cin >> m;
//     double total = 0.0;
//     for(int i =1; i<=m;i++){
//         total = total + (1.0/i);
//     }
//     std::cout  << total ;
// }


// so here we need to set precision upto 10 for which we need to include iomanip library.

// #include <simplecpp>
// #include <iomanip>
// main_program{
   
//     int m; //No of terms in the harmonic series
//     cin >> m;
//     double total = 0.0;
//     for(int i =1; i<=m;i++){
//         total = total + (1.0/i);
//     }
//     std::cout  << std::setprecision(10) <<total ;
// }

// we want 10 after decimal which not coming as what set precision does is whole number digits equal to 10.

// what set precison specfies is down below
//It specifies the total number of significant digits in the value (not just the digits after the decimal point)

// so to overcome this issue we use std::fixed for this problem 



#include <simplecpp>
#include <iomanip>
main_program{
   
    int m; //No of terms in the harmonic series
    cin >> m;
    double total = 0.0;
    for(int i =1; i<=m;i++){
        total = total + (1.0/i);
    }
    std::cout  << std::fixed << std::setprecision(10) <<total ;
}

//Without std::fixed:
//std::setprecision(n) applies to the total significant digits of the number.
//It formats numbers in scientific notation if necessary (e.g., very large or small numbers).

//With std::fixed:
//Forces the number to be displayed in fixed-point notation, 
//where std::setprecision(n) specifies the number of digits after the decimal point.