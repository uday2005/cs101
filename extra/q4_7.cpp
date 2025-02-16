#include <iostream>

using namespace std;

int main(){
    int no_of_digit;
    long long int number;
    int result = 0;
    int d;
    cin >> d >> no_of_digit >> number;

    int reverse_num = 0;
    int remainder;
    for(;number >0;number /= 10){ 
        remainder = number %10;
        reverse_num  = 10 * reverse_num + remainder ;
    }
    

    for (;reverse_num>0;reverse_num /= 10){
        int digit = reverse_num %10;
        result += digit *d;
        cout << result << endl;
    }
    cout << result;
}