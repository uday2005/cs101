#include <iostream>
using namespace std;

double square_root(double num){
    double high = num;
    double low = 0 ;
    double mid;
    double ephsilon = 0.0000001;

    while(high-low > ephsilon){
        mid = (high + low)/2;
        if(mid * mid > num ){
            high  =  mid;
        }
        else{
            low = mid;
        }
    }
    return mid;
}

int gcd(){
    int m ,n ;
    int result = 1;
    while(true){
        cin >> m >> n;
        if (n <0 || m<0) continue;
        if(m>n){
            int temp = m;
            m = n;
            n = temp;
        }

        for(int i = 2;i<=m;i++){
            while(n%i==0 && m%i ==0){
                 result *= i;
                 n= n/i;
                 m = m/i;
            }
          
        }
    return result;  
    }
    
}

int gcd_euclidean(){
    int m,n;
    cin >> m >> n;
    while(n!= 0){
        int temp = n;
        n = m%n;
        m = temp;
    }
}

void print_factors(int num)
{

    for(int i = 2;i<= num;i++){
        while(num%i==0){
            cout << i << " ";
            num = num /i ;
        }
}

}

void string_break(){
    string dy = " ";
    while(true){
        char c;
        cin >> c;
        dy+= c;
    }
}

int main(){
    cout << square_root(16) << "\n";
    cout << square_root(5) << "\n";
    
    cout << gcd() << "\n";
    print_factors(24) ;
}

