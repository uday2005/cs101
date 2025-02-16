#include <iostream>
using namespace std;

void c_to_f(int c){
    for(int i = 0;i<=c;i++){
        cout << ((i * 9)/5.0+ 32.0);
    }
}

void print_digits( int num){
    int original = num;
    int reverse_num = 0;
    for(;num>0;num/=10)
    {
    int digits = num %10;
    reverse_num = 10 * reverse_num + digits;
    cout << digits << " ";
    
    }
    cout << reverse_num << " ";
    cout << ((reverse_num == original) ? "Panlindrome": "Not Palindrome");
}

int main(){
    print_digits(5434);
    print_digits(6336);
}

void prime_factors(int num){
    int count = 0;
    
    while (num%2==0){
        cout << 2 << " ";
        num /= 2;
    }

    for(int i  = 3;i*i<num; i+= 2){
        while (num%i==0){
            cout << i << " ";
            num /= i;
        }
    }
  
    if(num>1){
        cout << num ;
    }
            

    }


