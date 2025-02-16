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

// Using bitwise operator for conversion

void decimal_to_binary(int n){
    for (int i=31;i>=0;i--){
        cout << ((n>>i)&1);
    }
    cout << endl; 
}

void decimal_to_binary2(int m){
    if (m==0) return ; // Base case sop if m is equals to zero.

    decimal_to_binary2(m/2); // recursive call to afterward number
    cout << m%2;



}

int binary_to_decimal (int m){
    int sum = 0, power = 1;

    while (m>0){
        int digit = m %10;
        sum += digit * power;
        power *= 2;
        m = m/10; 
    }
    return sum;
}

int binary_to_decimal2 (int m){
    int sum = 0,power = 1;

    while (m>0){
        sum = sum + ( m & 1) * power;
        power <<= 1;
        m >>= 1;
    }

    return sum;
}