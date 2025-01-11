#include <iostream>
using namespace std;

double power (double n,int m){
    double value = 1.0;
    for (int i =1 ; i <= m; i++){
        value = value * n;
    }
    std::cout << "The power of " << n  << "with the" << m << " times is" << value << std::endl;
    return value;
}

int factorial(int n){
    int value = 1;
    for (int i= 1; i <= n; i++){
        value = value * i;
    }
    std::cout << "The factorial of "<< n<<" is "<< value << std::endl;
    return value;
}

double degree_to_radian(int n){
    const double pi = 3.141592653589793;
    std::cout << "the value of degree is " <<  (double)(pi *n)/180;
    return (pi *n)/180.0;
}



int main(){
    const double pi = 3.141592653589793;
    std::cout << "Which degree of sinx you want to know" << std::endl;
    int n;
    std::cin  >> n;

    std::cout << "How many terms you want in taylor expansion for more precision more will be terms"<<std::endl;
    int m;
    std::cin >> m;

    double degree = degree_to_radian(n);

    double sum  = 0;

    for (int i = 0;i<m;i++){
        sum = sum + (double)((power(-1,i+2))* (power(degree,2*i+1))/(factorial(2*i+1)));
       std::cout << "the first sum is " << sum;
    }
    std::cout << "Final sum is"<< sum;

    return 0;

}