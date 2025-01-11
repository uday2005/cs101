#include <iostream>
using namespace std;



int power (int n,int m){
    int value = 1;
    for (int i =1 ; i <= m; i++){
        value = value * n;
    }
    std::cout << "The power of " << n  << "with the" << m << " times is" << value << std::endl;
    return value;
}

int main(){
    std::cout << "Till how mcuh you want the summation" << std::endl;
    int n ;
    std::cin >> n;
    double value = 0;
    for (int i = 1; i <= n; i++){
        double factor = (double)(power(-1,(i+1)))/(i);
        std::cout << factor << std::endl;
        std::cout << value;
        value  = value + factor;
    }
    std::cout << "The value is " << value << std::endl;
    return 0;
}