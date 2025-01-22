#include <simplecpp>
#include  <iostream>
using namespace std;

 float pow(float p, float q) {
    int result = 1; // Initialize result to 1
    for (int i = 0; i < q; i++) {
        result = result * p; // Multiply by p in each iteration
    }
    return result;
}

int max_power (int num){
    int n = 1;

    while ((pow(2,n) - num) <= 0){
        n += 1;
    }
    return (n-1);
}
main_program{
int num ;
cin >> num;
int high = max_power(num);
while (!(high < 0)){
    
    if ((pow(2,high)- num)<= 0){
        num = num - pow(2, high);
        std::cout << 1;
    }
    else{
        std::cout << 0;
    }
    high = high - 1;

}

}